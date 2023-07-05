//trabajan 48 horas por semestre
//cada hora equivale a 23.400
//subsidio semestral de 250 food
//Codigo
#ifndef HH_Monitor
#define HH_Monitor
#include <string>
#include "Persona.h"
#include <iostream>
using namespace std;

class Monitor : public Persona{
	private:
		int codigo;
	public: 
	    Monitor();
		~Monitor();
	    Monitor(string _nombre, string _apellido, int _codigo);
	    void setCodigo(int _codigo);
	    int getCodigo();
		int subsidio();
		int sueldoMonitor();
};
#endif