#ifndef HH_Persona
#define HH_Persona
#include <string>
#include <iostream>
using namespace std;
//Nombre, apellido
class Persona{
	//Atributos
	private:
		string nombre, apellido;
	//Metodos
	public: 
		Persona();
		Persona(string _nombre, string _apellido);
		
		~Persona();
	
		void setNombre(string _nombre);
		void setApellido(string _apellido);
		string getNombre();
		string getApellido(); 
		
		void sueldo();
};
#endif