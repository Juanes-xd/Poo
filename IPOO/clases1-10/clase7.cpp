//Funciones
#include <iostream>
using namespace std;
/*
void miFuncion(){
    cout<<"Hola, bienvenido a la clase de IPOO";
}
*/
void miFuncion(string nombre){
    cout<<"Hola, "<<nombre <<" bienvenido a la clase de IPOO"<<endl;
}
double area(){
    double base,altura;
    cout<<"Digite la base: ";
    cin>>base;
    cout<<"Digite la altura: ";
    cin>>altura;
    
  return (base * altura)/2;
}
int main(){
 //miFuncion("Juanes");
 cout<<area();
    return 0;
}

