#include <iostream>
#include <fstream>
using namespace std;
// Cree un algoritmo en C++ que solicite a un usuario la lista de
// nombres y apellidos de los estudiantes de una clase y los almacene en un archivo
// de nombre “listado_estudiantes.txt”. El algoritmo debe permitir seguir
// agregando estudiantes hasta que el usuario decida no ingresar más nombres.
// Una vez finalizado el proceso de escritura, abra el archivo y 
// almacene los datos en un vector de nombre “vector_estudiantes”
// Muestre los datos almacenados en 
// “vector_estudiantes” a través de la consola.


void listaEstudiantes(string _archivo, string _linea){
	fstream miArchivo(_archivo, ios::in | ios::out | ios::app); //creación.
	if(miArchivo){
		miArchivo<<_linea<<"\n";
		cout<<"El nombre "<<_linea<<" Se escribió en el archivo"<<endl;
		
	}else{
		cout<<"Error al escribir en el archivo "<<endl;
	}
	string puente;
	while(getline(miArchivo, puente)) {
		cout<<puente<<endl;
		cout<<"\t";
	}
	miArchivo.close();
}

int main(){
	string linea, archivo=" ";
	string resp;
	cout<<"Nombre del archivo: "<<endl;
	getline(cin, archivo);
    cout<<"Escriba un nombre de estudiante para almacenar en el archivo: ";
    getline(cin, linea);
	listaEstudiantes(archivo, linea);

        cout<<"\n¿Desea continuar?(s/n)";cin>>resp;
    while(resp == "s" ){
    	cout<<"Escriba un nombre de estudiante para almacenar en el archivo: ";
    	cin.get();
	    getline(cin, linea);
	    listaEstudiantes(archivo, linea);
	    cout<<"\n¿Desea continuar?(s/n)";cin>>resp;   	
    }
	return 0;
}