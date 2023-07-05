
#include "User.h"
#include <time.h>
#include <vector>
#include <algorithm>
#include <locale>
#include <iostream>
using namespace std;

int main(){
    vector<string>Preguntas1={"hola","chao","epa","melo"};
    vector<string>Respuestas1={"a. si","b. no","c. tal vez","d. no se"};
    int categoria ;
    string i;
    string respu;
    
    cout<<"Introduzca el numero de la categoria que desea: "; cin>>categoria;
    if(categoria == 1){
        srand(time(NULL));
        i = Preguntas1[0+(rand()%(Preguntas1.size()))];
        cout<<i<<endl;
         i.front();
        Preguntas1.pop_back();

        for (int j = 0; j < Respuestas1.size(); j++)
        {
            cout<<Respuestas1[j]<<endl;
        }
        cout<<"Escoja su respuesta: ";
        cin>>respu;
    }

    //cout<<"La respuesta es:  ";
    if(i == Preguntas1.at(0) ||i == Preguntas1.at(1) || i == Preguntas1.at(2) || i == Preguntas1.at(3) and respu == "a"){
       cout<<"Correcto, has acertado."<<endl;
    }
    else{
        cout<<"Incorrecto, has fallado, la respuesta correcta es: "<<Respuestas1.at(0);
    }
    return 0;
}


/*
         cout<<"------------------------"<<endl;
         for (int j = 0; j < Preguntas1.size(); j++)
         {
             cout<<Preguntas1[j]<<endl;
         }
         */