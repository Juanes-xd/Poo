//Leer y escribir a un archivo
#include <iostream>
#include <fstream>
using namespace std;
void escribirArchivo(string _archivo, string _linea){
	fstream miArchivoLE(_archivo, ios::in | ios::out | ios::app);
	if(miArchivoLE){
		miArchivoLE<<_linea<<"\n";
		cout<<"La linea "<<_linea<<" se escribio en el archivo"<<endl;
	}else{
		cout<<"Error al escribir en el archivo"<<endl;
	}
	string ln;
	while(getline(miArchivoLE, ln )){
		cout<<ln<<endl;
	}
	miArchivoLE.close();
    
}
int main(){
	string linea, archivo{};
	cout<<"Nombre del archivo: "<<endl;
	getline(cin,archivo);
	cout<<"Escriba una linea para almacenar en el archivo: ";
	getline(cin, linea);
	escribirArchivo(archivo, linea);
    return 0;
}


