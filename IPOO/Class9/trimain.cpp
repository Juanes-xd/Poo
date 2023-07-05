#include <iostream>
#include "triangulo.cpp"
using namespace std;
int main(){
Triangulo tri1;
Triangulo tri2(10,20);
 double base1;
 double altura1;
 cout<<tri2.GetArea()<<endl;
 cout<<"Digite el valor de la base: ";
 cin>>base1;
 tri1.SetBase(base1);
 cout<<"Digite el valor de la altura: ";
 cin>>altura1;
 tri1.SetAltura(altura1);
 cout<<"El area del triangulo es de: "<<tri1.GetArea()<<endl;
    return 0;
}