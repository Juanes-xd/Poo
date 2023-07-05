#include <iostream>
#include <fstream>
#include <locale>
#include <vector>
using namespace std;
vector<string>nomLista;
vector<string>ordnomLista;
vector<double>notas; 
vector<double>ordnotas; 
double notareal;
int cont;
void leerArchivo(string _nombre){
	ifstream miArchivo1(_nombre);
	if(miArchivo1){
		string linea;		
		while(getline(miArchivo1,linea)){
			//asigna los nombres a las posiciones del vector
			nomLista.push_back(linea);

			
			//ordnomLista.push_back(nomLista[cont]);
			//genera notas al azar entre 1-5
			double nota = (100 + rand() % (401));
			double notaF = nota / 100;
			notas.push_back(notaF);
			//notareal=(rand()%(500-100+100)+100)/10;
			//notas.push_back(notareal/10);	
		     
			//ordnotas.push_back(notas[cont]);	
			//muestra los vectores de los nombres y las notas
			//cout<<nomLista[cont]<<endl;
			//cout<<ordnomLista[cont]<<endl;
			//cout<<notas[cont]<<endl;
			//cout<<ordnotas[cont]<<endl;
			
			//cont++; 
			/*
			for (int i = 0; i < notas.size(); i++)
			{
				cout<<notas[i]<<endl;
			}
			*/
			
			
		}
	}else{
		cout<<"error al leer el archivo "<<endl;
	}
	miArchivo1.close();
}






	//ordenamiento burbuja mejorado NOMBRES
	void porNombre(string _nombre){
		ifstream miArchivo1(_nombre);
	  int it=0;
	string aux;
	bool cambio=1;
	
	if (miArchivo1){
	
	while(cambio==1) {
		cambio=0;
		for(int j=0;j<nomLista.size()-1;j++){
			if(nomLista[j] > nomLista[j+1]){
				aux = nomLista[j];
				nomLista[j] = nomLista[j+1];
				nomLista[j+1] = aux;
				cambio=1;
			}
		}
	   it++;
	};
	
		cout<<"Ordenacion de forma Ascendente: "<<endl;
	for(int i=0;i<nomLista.size();i++){
		//cout<<nomLista[i]<<" "<<endl;
	}
    }
	miArchivo1.close();
	}
	
	
	//ordenamiento burbuja mejorado NOTAS
	void porNotas(string _nombre){
		ifstream miArchivo1(_nombre);
		
	int it=0;
	double aux;
	bool cambio=1;
	if (miArchivo1){
		
	 while(cambio==1) {
		cambio=0;
		for(int j=0;j<notas.size()-it;j++){
			if(notas[j] > notas[j+1]){
				aux = notas[j];
				notas[j] = notas[j+1];
				notas[j+1] = aux;
				cambio=1;
			}
		}
	   it++;
	   
	 };
	 
	
	 cout<<"Ordenacion de forma Ascendente: "<<endl;
	 for(int i=0;i<notas.size();i++){
		cout<<"Nota: "<<notas[i]<<" de "<<nomLista.at(i)<<endl;
	}
	}
miArchivo1.close();
}
	
		
/*	
	string resp, _nombre;
	 cout<<"Ingrese los nombres de los alumnos: "<<endl;
        cin>>_nombre;
        nomLista.push_back(_nombre);
        cout<<"\nDesea continuar?(s/n)";cin>>resp;

        while(resp == "s" ){
        cout<<"Ingrese los nombres de los alumnos: "<<endl;
        cin>>_nombre;
        nomLista.push_back(_nombre);
        cout<<"\nDesea continuar?(s/n)";cin>>resp;
        }
	*/
	
	
int main(){
	setlocale(LC_CTYPE, "utf-8");
	string nombre{};
	cout<<"Escriba el nombre del archivo a leer: ";
	cin>>nombre;
	leerArchivo(nombre);
	porNombre(nombre);
	porNotas(nombre);
	
	return 0;
}
