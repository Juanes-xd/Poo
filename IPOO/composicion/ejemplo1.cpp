#include <iostream>
using namespace std;
class Director{
	int id, sueldo;
	string nombre;
public:
	Director(int _id,  string _nombre, int _sueldo ):id(_id), nombre(_nombre), sueldo(_sueldo) {
	}
	string getNombre(){
		return nombre;		
	}		
};

class Proyecto{
private: 
	string nomProy;
	Director director;
public:
	Proyecto(string _nomProy, Director _director): director(_director){
	this->nomProy=_nomProy;
	}
void mostrarProyecto(){
	cout<<"Proyecto: "<<nomProy<<" - Director: "<<director.getNombre()<<endl;	
}	
};

int main(){
	Proyecto proy1("Education first", Director (4558,"Jorge Perez",500000));
	proy1.mostrarProyecto();
	return 0;
}
