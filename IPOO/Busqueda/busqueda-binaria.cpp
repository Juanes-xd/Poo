#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>numeros = {3,5,7,10,15,20,25,27,30,31,32,40,48};
    int encontrado=0,inf=0,sup,mitad,buscar,i{};
    buscar = 30; //dato a buscar
    sup=numeros.size();
    while(i<numeros.size()){
    mitad = (inf+sup)/2;
    if(numeros[mitad] == buscar){
    encontrado=1;
    cout<<"El numero se encontro en la pos: "<<mitad<<endl;
    break;
    }
    if(numeros[mitad]>buscar){
    sup = mitad-1;}
    else{
    inf = mitad+1;
    }
    i++;
    }
    if(encontrado == 0){
        cout<<"El numero NO se encontro";
        }
    return 0;
}