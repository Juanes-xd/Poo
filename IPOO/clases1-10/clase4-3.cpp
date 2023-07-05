#include <iostream>
using namespace std;
int main(){
    string seguir;
    int valor,suma=0;
    cout<<"Digite s para seguir: "; cin>>seguir;
    while (seguir == "s")
    {
        cout<<"Digite un valor: "; cin>>valor;
        suma += valor;
        cout<<"La suma es: "<<suma<<endl;
        cout<<"Si desea otro numero digite s, de los contrario n: "<<endl; cin>>seguir;
    }
    cout<<"La suma de los numeros es: "<<suma;
    return 0;
}