#include "Director.h"
#include <string>
using namespace std;

Director::Director(){
}
Director::~Director(){
}
Director::Director(string _nombre, string _apellido, int _cedula):Investigador(_nombre, _apellido, _cedula){
}

int Director::bonificacion(){
	return 1450000 * 2;
}