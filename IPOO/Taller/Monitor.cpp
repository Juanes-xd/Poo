#include "Monitor.h"
#include <string>
#include <iostream>
using namespace std;

Monitor::Monitor(){
}
Monitor::~Monitor(){
}
Monitor::Monitor(string _nombre,string _apellido, int _codigo):Persona(_nombre, _apellido){

	codigo = _codigo;
}
void Monitor::setCodigo(int _codigo){
	codigo=_codigo;
}
int Monitor::getCodigo(){
	return codigo;
}
int Monitor::sueldoMonitor(){
	return (48*23400 + 250000)*2;
}