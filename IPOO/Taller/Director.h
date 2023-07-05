//Salario fijo de 2450
//Bonificación de 1450 por semestre
//Cedula
#ifndef HH_Director
#define HH_Director
#include <string>
#include "Investigador.h"
using namespace std;
class Director:public Investigador{
	//Atributos
	
	//Metodos
	public: 
	    Director();
		~Director();
	    Director(string _nombre,string _apellido, int _cedula);
		int bonificacion();
};
#endif