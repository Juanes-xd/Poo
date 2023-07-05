//Poliformismo.
#include <iostream>
#include <conio.h>
using namespace std;

class Persona{
 private:
  string nombre;
  int edad;
  public:
  Persona(string,int);
  virtual void mostrar();
};
Persona::Persona(string _nombre,int _edad){
    nombre = _nombre;
    edad = _edad;
}
void Persona::mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

class Alumno : public Persona{
 private:
 float notaFinal;
 public:
 Alumno(string,int,float);
 void mostrar();
};
Alumno::Alumno(string _nombre,int _edad,float _notaFinal) : Persona(_nombre,_edad){
    notaFinal = _notaFinal;
}
void Alumno::mostrar(){
    Persona::mostrar();
    cout<<"Nota final: "<<notaFinal<<endl;
}

class Profesor : public Persona{
 private: 
 string materia;
 public:
 Profesor(string,int,string);
 void mostrar();
};

Profesor::Profesor(string _nombre,int _edad,string _materia) : Persona(_nombre,_edad){
  materia = _materia;
}
void Profesor::mostrar(){
    Persona::mostrar();
    cout<<"Materia: "<<materia<<endl;
}


int main(){
Persona *vector[3];
vector[0]= new Alumno("Juan",18,5.0);
vector[1]= new Alumno("Juli",19,4.8); 
vector[2] = new Profesor("Jef",27,"FDP");

vector[0]->mostrar();
cout<<"\n";
vector[1]->mostrar();
cout<<"\n";
vector[2]->mostrar();

    getch();
    return 0;
}