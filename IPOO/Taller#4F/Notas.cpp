#include "Notas.h"
#include <vector>
#include <iostream>
using namespace std;


Notas::Notas(){}
Notas::Notas(string _nombre, double _nota){
   this->nombre.push_back(_nombre);
   this->nota.push_back(_nota);
}

void Notas::setEstudiantes(string _nombre){
       // string _nombre;
        string resp;
        /**
        cout<<"Ingrese los nombres de los alumnos: "<<endl;
        cin>>_nombre;
        */
        nombre.push_back(_nombre);
        cout<<"\nDesea continuar?(s/n)";cin>>resp;

        while(resp == "s" ){
        cout<<"Ingrese los nombres de los alumnos: "<<endl;
        cin>>_nombre;
        nombre.push_back(_nombre);
        cout<<"\n¿Desea continuar?(s/n)";cin>>resp;
        }

}
void Notas::setNotas(double _nota){
        //string _nombre;
        string respu;
        /**
        cout<<"Ingrese las notas de los alumnos: "<<endl;
        cin>>_nota;
        */
        nota.push_back(_nota);
        cout<<"\nDesea continuar?(s/n)";cin>>respu;

        while(respu == "s" /**&& nota.size() <= nombre.size()*/ ){
        cout<<"Ingrese las notas de los alumnos: "<<endl;
        cin>>_nota;
        nota.push_back(_nota);
        cout<<"\n¿Desea continuar?(s/n)";cin>>respu;
        }
}
string Notas::getLista(){
    /**
    string lstudents;
    cout<<"Ingrese los estudiantes: ";
    cin>>lstudents;
*/
  	for(int i=0; i<nombre.size(); i++){
        cout<<nombre[i]<<endl;
	} 
    return "Lista";
    
}
double Notas::getPromedio(){
  double suma=0,promedio=0;
  for (int i = 0; i < nota.size(); i++)
  {
      suma += nota[i];
     promedio = suma/nota.size();
  }
  cout<<promedio<<endl;
  return promedio;
  //cout<<"El promedio de notas de la clase es de: "<<promedio<<" ";
}
double Notas::getMejorNota(){
    int it=0,aux;
	bool cambio=1;
	while(cambio==1) {
		cambio=0;
		for(int j=0;j<nota.size()-it;j++){
			if(nota[j] > nota[j+1]){
				aux = nota[j];
				nota[j] = nota[j+1];
				nota[j+1] = aux;
				cambio=1;
			}
		}
	   it++;
	};
	for(int i=0;i<nota.size();i--){
		cout<<nota[0]<<" ";
	}	
    return nota[0];

}

double Notas::getPeorNota(){
      int it=0,aux;
	bool cambio=1;
	while(cambio==1) {
		cambio=0;
		for(int j=0;j<nota.size()-it;j++){
			if(nota[j] > nota[j+1]){
				aux = nota[j];
				nota[j] = nota[j+1];
				nota[j+1] = aux;
				cambio=1;
			}
		}
	   it++;
	};
    for(int i=0;i<nota.size();i++){
		cout<<nota[0]<<" ";
	}	
    return nota[0];
}

string Notas::getEstudiante(string estudiante){
    /*
    int n;
    cout<<"Digite el nombre del estudiante: "<<endl; cin>>n;
    cout<<".\n Estudiante: "<<nombre.at(n-1)<<".\n Nota: "<<nota.at(n-1)<<".\n";
    */
    int sel =0;
    //cout<<"Digite el nombre del estudiante: "<<endl; cin>>estudiante;
    for (int i = 0; i < nombre.size(); i++)
    {
        if(estudiante == nombre[i]){
            cout<<".\n Estudiante: "<<nombre.at(i)<<".\n Nota: "<<nota.at(i)<<".\n";
            sel =1;
        }
        
    }
    if(sel == 0){
        cout<<"No existe el alumno"<<endl;
    }
    return "Terminado";
}

void Notas::retirarEstudiante(){
     int sel;
    cout<<"Digite el numero del estudiante a eliminar: "<<endl; cin>>sel;
    nombre.erase(nombre.begin()+(sel-1));
    nota.erase(nota.begin()+(sel-1));
    cout<<"El estudiante a sido eliminado de la clase"<<endl;
}
 
