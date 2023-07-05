//Leer ficheros
#include <iostream>
#include <fstream>
#include <locale>
using namespace std;
void leerArchivo(string _nombre){
	ifstream miArchivol(_nombre);
	if(miArchivol){
	string linea;
	while(getline(miArchivol, linea)){
	cout<<linea<<endl;
}
	miArchivol.close();
}
else{
	cout<<"Error al leer el archivo"<<endl;
}
}
int main(){
	setlocale(LC_CTYPE, "utf-8");
	string nombre{};
	cout<<"Escriba el nombre del archivo a leer: ";
	cin>>nombre;
	leerArchivo(nombre);
	return 0;
}
