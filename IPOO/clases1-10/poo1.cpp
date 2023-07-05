#include <iostream>
#include <conio.h>
using namespace std;
 class Persona  //Clase
   {
    private:  //Atributos
       int edad;
       string nombre;
    public:
       Persona(int,string);//Constructor
       void leer();
       void correr();
   };
//Constructor, nos sirve para inicializar los atributos de la clase.
Persona::Persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;
}
void Persona::leer(){
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro "<<endl;
}
void Persona::correr(){
cout<<"Soy "<<nombre<<" y estoy corriendo "<<"y tengo "<<edad<<endl;
}
int main(){
    Persona p1 = Persona(17,"Juan"); //Creamos el objeto(p1).
    Persona p2(20,"Angela");
    //Lo ponemos a hacer sus acciones(metodos).
    p1.leer();
    p2.correr();

    getch();
    return 0;
}