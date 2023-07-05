#include <iostream>
using namespace std;
class Persona{
private:
	int id; 
	string nombre;
public:	
	Persona(int _id, string _nombre): id{_id}, nombre{_nombre}{
	}
	void setId(int _id){
		this->id=_id;
	}
	void setNombre(string _nombre){
		this->nombre=_nombre;
	}
	int getId(){
		return id;
		}
	string getNombre() {
		return nombre;
	}	
};

//Clase compuesta: propiedad.
class Propiedad{
	private:
		int matricula;
		string direccion;
		Persona propietario; //agregación de la clase persona
	public:
		Propiedad(int _matricula, string _direccion, Persona _propietario):propietario(_propietario){
		this->matricula=_matricula;
		this->direccion=_direccion;
		}
        ~Propiedad(){
            cout<<"La propiedad ya no existe"<<endl;
        }
		void mostrarPropiedad(){
		cout<<"La propiedad "<<matricula<<" pertenece a "<<propietario.getNombre()<<endl;
		cout<<"La direccion de la propiedad es "<<direccion<<endl;
		}
		
};

int main(){

	Persona prop1(6419888, "Jose Gomez");
    {
	Propiedad apto1(465, " calle 13 # 100-00 ", prop1);
	apto1.mostrarPropiedad();
    }
    cout<<"El propietario "<<prop1.getNombre()<<" todavia existe"<<endl;
    /*
	Persona prop2(321456,"Jorge Caceres");
	Propiedad casa1(385, " Cra 16 # 10-06", prop2);
	casa1.mostrarPropiedad();
    */
 return 0;
}
