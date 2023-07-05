#include <iostream>
//Paso por valor
using namespace std;
class Persona{
private:
	string name;
public:
	Persona(string _name):name(_name){
	}
	void setName(string _name){
		this->name=_name;
	}
	string getName(){
		return name;
	}
};
