#include <iostream>
#include <vector>
#include <fstream>
#include <locale>
using namespace std;

vector<string> estudiantes;
vector<double> notas;

void cargarLista(string _nameList);
void leerLista();
void guardarLista();

int main(){
	setlocale(LC_CTYPE, "utf-8");
	cargarLista("listado3.txt");
	leerLista();
	guardarLista();
	return 0;
}

void cargarLista(string _nameList){
	ifstream listaEst(_nameList);
	if (listaEst){
		string linea;

		while (getline(listaEst, linea, '\n')){
			double x = (100 + rand() % (400));
			double notaRand = x / 100;
			estudiantes.push_back(linea);
			notas.push_back(notaRand);
		}
	}
	else{
		cout << "Error al cargar la lista";
	}

	listaEst.close();
}

void guardarLista(){
	ofstream listaOrd("listaOrdenadaNotas.txt");

	if (listaOrd){
		for (int i = 0; i < estudiantes.size(); i++){
			listaOrd << estudiantes.at(i) << " ," << notas.at(i) << "\n";
		}
		/*
		int i, pos, actual;
      for (i = 1; i < notas.size(); i++) {
      actual = notas[i];
      for (pos = i; pos > 0 && notas[pos - 1] > actual; pos--) {
      notas[pos] = notas[pos - 1];
      }
      notas[pos] = actual;
      }
	  */
	}
};

void leerLista(){
	
	double menor, aux, it=0;
     for (int sel = 0; sel < notas.size() - 1; sel++){
         menor = sel;
         for (int j = sel+1; j < notas.size(); j++){	 
              if (notas[j] < notas[menor]){
			  menor = j;
              }
		}
          aux = notas[sel];
          notas[sel] = notas[menor];
          notas[menor] = aux;
         
    }
	
	for (int i = 0; i < notas.size() and i<estudiantes.size() ;i++){
		cout << estudiantes.at(i) <<" ---> " << notas.at(i) << "\n";
    }
};


