#include <iostream>
#include <conio.h>
using namespace std;


int main(){
    int edad;
    cout<<"Digite su edad: "<<endl;
    cin>>edad;
    if(edad < 18){
      cout<<"Es muy joven "<<endl;
    }
      else if(edad >= 18 and edad < 35){
         cout<<"mayor de edad"<<endl;

      }  
    else if(edad >= 35 and edad < 60){
      cout<<"Es adulto"<<endl;
    }
    else if(edad > 60){
      cout<<"Es adulto mayor";
    }
    else{
      cout<<"No es una edad valida"<<endl;
    }
    
    getch();
    return 0;
}
