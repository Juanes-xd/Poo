//Destructores.
#include <iostream>
#include <conio.h>
using namespace std;
class Perro{
 private:
  string nombre,raza;
  public:
  Perro(string,string);//Constructor.
  ~Perro();//Destructor.
  void MostrarDatos();
  void jugar();
};
//Constructor.
Perro::Perro(string _nombre,string _raza){
    nombre = _nombre;
    raza = _raza;
}
//Destructor.
Perro::~Perro(){

}
void Perro::MostrarDatos(){
    cout<<"Nombre: "<<nombre<<"->"<<"Raza: "<<raza<<endl;
}
void Perro::jugar(){
    cout<<"El perro "<<nombre<<"esta jugando"<<endl;
}
int main(){
    Perro lola("Lola","Fila");
    lola.MostrarDatos();
    lola.jugar();
    getch();
    return 0;
}