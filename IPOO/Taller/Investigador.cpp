#include "Investigador.h"
#include <string>
using namespace std;

Investigador::Investigador(){
}
Investigador::~Investigador(){
}
Investigador::Investigador(string _nombre,string _apellido, int _cedula):Persona( _nombre, _apellido){

	cedula= _cedula;
}
void Investigador::setCedula(int _cedula){
	cedula = _cedula;
}
int Investigador:: getCedula(){
	return cedula;
}

int Investigador::sueldoInvestigador(){
	return 2450000*12;
}