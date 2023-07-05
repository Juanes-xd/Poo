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

class Empleado : public Persona{
    private:
      string area;
      
    public:
      Empleado(string,int,string);
      void mostrarEmpleado();
};

class Estudiante : public Persona{
    private:
    string salon;
    float notFinal;
    public:
    Estudiante(string,int,string,float);
    void mostrarEstudiante();
};

class Universitario : public Estudiante{
    private:
        string codigo;
        
    public:
     Universitario(string,int,string,float,string);    
     void mostrarUniversitario();
};

Persona:: Persona(string _nombre,int _edad){
   nombre = _nombre;
   edad = _edad;
}

Empleado::Empleado(string _nombre,int _edad,string _area) : Persona(_nombre,_edad){
    area = _area;
}

Estudiante::Estudiante(string _nombre,int _edad,string _salon,float _notFinal) : Persona(_nombre,_edad){
    salon = _salon;
    notFinal = _notFinal;
}

Universitario::Universitario(string _nombre,int _edad,string _salon,float _notFinal,string _codigo) : Estudiante(_nombre,_edad,_salon,_notFinal){
    codigo = _codigo;
}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Empleado::mostrarEmpleado(){
    mostrarPersona();
    cout<<"Cargo: "<<area<<endl;
}

void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Salon: "<<salon<<endl;
    cout<<"Nota final: "<<notFinal<<endl;
}

void Universitario::mostrarUniversitario(){
    mostrarEstudiante();
    cout<<"Codigo:"<<codigo<<endl;

}

int main(){
Empleado empleado1("Juan",18,"Programador");
  empleado1.mostrarEmpleado();
  cout<<"-------"<<endl;
Universitario universitario1("Juanes",17,"81",5.0,"2026270");
  universitario1.mostrarUniversitario();

    getch();
    return 0;
}