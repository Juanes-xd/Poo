//Archivo de implementación de la Clase.

#include "User.h"
//#include <iostream>
//#include <ostream>
#include <time.h>
#include <vector>
#include <algorithm>
#include <locale>
#include <iostream>
#include <string>
using namespace std;

User::User(){};
//User::User(vector<string>_Name, vector<int> _puntaje, vector<string>_Preguntas, vector<string>_Respuestas): Name(_Name), puntaje(_puntaje), Preguntas1(_Preguntas), Respuestas(_Respuestas){} 
User::~User(){

    //Refreshing parameters.
    Name.clear();
    puntaje.clear();
    Preguntas1.clear();
    Respuestas.clear(); 
};

//GetName...

void User::getName(){
    string name;
	std::cout<<"Escribe un nickname para almacenar tú puntaje: ";
    getline(cin, name);
	Name.push_back(name);
}

/*
void User::LeerArchivo(string _lectura, string _linea){
    fstream _lectura("Score.txt", ios::in | ios::out | ios::app);
}
*/
void User::question(int categoria, vector<string> _Pregunta){
    string i;
    if(categoria == 1){
        srand(time(NULL));
        i = Preguntas1[0+(rand()%(Preguntas1.size()))];
        std::cout<<i;
        i.front();
        Preguntas1.pop_back();
    }
    else if(categoria == 2){
        srand(time(NULL));
        i = Preguntas2[0+(rand()%(Preguntas2.size()))];
        std::cout<<i;
        i.front();
        Preguntas2.pop_back();
    }
    else if(categoria == 3){
        srand(time(NULL));
        i = Preguntas3[0+(rand()%(Preguntas3.size()))];
        std::cout<<i;
        i.front();
        Preguntas3.pop_back();
    }
   else if(categoria == 4){
        srand(time(NULL));
        i = Preguntas4[0+(rand()%(Preguntas4.size()))];
        std::cout<<i;
        i.front();
        Preguntas4.pop_back();
    }
    else if(categoria == 5){
        srand(time(NULL));
        i = Preguntas5[0+(rand()%(Preguntas5.size()))];
        std::cout<<i;
        i.front();
        Preguntas5.pop_back();
    }
    else{
        std::cout<<"\n***** El numero ingresado no es valido *****\n"<<endl;
    }

}

// OE german.
void User::getScore(int score){
    puntaje.push_back(score);
}

// Guardar datos en el archivo plano 'txt'. 
void User::saveArchivo(){
    fstream save("score.txt", ios::in | ios::out | ios::app);
   
    if(save){
      for(int i=0; i<Name.size(); i++){
        save<<Name.at(i) <<", "<<puntaje.at(i)<<" \n";

      }
    }
    else{
      std::cout<<"Error al escribir en el archivo."<<endl;
    }
    save.close();
}


void User::LeerArchivo(string _nombre, string _Puntaje){
	ifstream miArchivo("score.txt");
	if(miArchivo){
	string linea="";
	vector <string> Names, Puntajes;
	int fn=0;
	int sig=0;
	while(getline(miArchivo, linea,'\n')){
	string Name="";
	string Puntaje="";	
		for (int i=0; i<linea.length();i++){ //Encontrar el separador. , la coma o espacio.
			if(linea[i]==','){ // el tabulador es asi: '\t' . salto de linea: '\n'. 
			fn=i;
			//cout<<i<<endl; // 
			}
			}
		for (int j=0;j<fn;j++){ //el ciclo for para el name.
			Name+=linea[j];
            //cout<<"Nombre: "<<Name<<endl;
		}	
		for (int k=fn+1;k<linea.length();k++){ //ciclo for para el puntaje.
			Puntaje+=linea[k];
		}
		Names.push_back(Name); //se mete el nombre al puntaje al vector.
		Puntajes.push_back(Puntaje); //se mete juju el puntaje al vector.
		std::cout<<Names[sig]<<": ";// Aqui ya los muestra...
		std::cout<<Puntajes[sig]<<endl;	
		sig++;			
}

	//ordenarPtjes(&Names, &Puntajes);
	miArchivo.close();
}
else{
	cout<<"Error al leer el archivo"<<endl;
}
}


//     sort(v.begin(), v.end()); 

void User::ordenarPtjes(){
	vector<string> cp_nom = Name;     
    sort(Name.begin(), Name.end());
    vector<int> cp_pun;     
    for(int i = 0; i < Name.size(); ++i){
        for(int j = 0; j < cp_nom.size(); ++j){
            if(cp_nom[j] == Name[i]){
                cp_pun.push_back(puntaje[j]);
            }
        }
    }           
    puntaje.clear();
    puntaje = cp_pun;


