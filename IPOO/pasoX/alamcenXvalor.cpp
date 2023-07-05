#include <iostream>
using namespace std;
int main(){
int p=7; //Se crea la variable p
int* q=&p; //Se crea la variable q
cout <<" variable p: "<<p<<" almacenada en "<<&p<<endl;
cout <<" variable q: "<<*q<<" almacenada en "<<&q<<endl;
*q=32; //cambia el valor de la variable p;
cout <<" variable p: "<<p<<" almacenada en "<<&p<<endl;
cout <<" variable q: "<<*q<<" almacenada en "<<&q<<endl;
return 0;
}
