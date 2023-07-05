//Herencia.
#include <iostream>
#include <conio.h>
using namespace std;

class Persona{
private:
    string nombre;
    int edad;
public:
 Persona(string,int);
    void mostrarPersona();
};

class alumno : public Persona{
    private:
    string codigo;
    float notFinal;
    public:
    alumno(string,int,string,float);
    void mostrarAlumno();
};

//Constructor de la clase Persona(Clase padre).
 Persona:: Persona(string _nombre,int _edad){
    nombre = _nombre;
    edad = _edad;
}

alumno::alumno(string _nombre,int _edad,string _codigo,float _notFinal) : Persona(_nombre,_edad){
  codigo = _codigo;
  notFinal = _notFinal;
}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void alumno::mostrarAlumno(){
    mostrarPersona();
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Nota final: "<<notFinal<<endl;
}

int main(){
   alumno alumno1("Juanes",17,"2026270",5.0);
    alumno1.mostrarAlumno();
    getch();
    return 0;
}