//Salario fijo de 2450
//cédula

#ifndef HH_Investigador
#define HH_Investigador
#include "string.h"
#include <iostream>
#include "Persona.h"
using namespace std;

class Investigador:public Persona{
	private: 
		int cedula;
	//metodos
	public: 
	    Investigador();
	    Investigador(string _nombre, string _apellido, int _cedula);
	    ~Investigador();
        int sueldoInvestigador();
	    void setCedula(int _cedula);
	    int getCedula();
		
		
};
#endif //HH_Investigador