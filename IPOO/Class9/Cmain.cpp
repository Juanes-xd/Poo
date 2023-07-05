#include <iostream>
#include "Cubo.cpp"
using namespace std;
int main(){
   Cubo cubo1;
   double lado1;
   cout<<"Digite el valor del lado: ";
   cin>>lado1;
   cubo1.SetLado(lado1);
   cout<<"El volumen del cubo es "<<cubo1.GetVolumen()<<" y el area es "<<cubo1.GetArea(); 
    return 0;
}