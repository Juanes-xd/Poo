#include "Persona.h"
#include <string>
#include <iostream>
using namespace std;

Persona::Persona(){
}
Persona::~Persona(){
}
Persona::Persona(string _nombre, string _apellido){
	nombre = _nombre;
	apellido = _apellido;	
}
void Persona::setNombre(string _nombre){
	nombre = _nombre;
}
void Persona::setApellido(string _apellido){
	apellido = _apellido;
}
string Persona::getNombre(){
	return nombre;
}
string Persona::getApellido(){
	return apellido;
}
void Persona::sueldo(){
	cout<<"Su sueldo es: ";
}