
#include <iostream>
using namespace std;

class Suma{
    public:
     int a;
     int b;
     public:
     int sum(){
         return a + b;
     }
};

int main(){
    int a,b;
     Suma suma1;
     Suma suma2;
    cout<<"Digite dos valores para a y b(suma1): ";
    cin>>a>>b;
    suma1.a=a;
    suma1.b=b;
    cout<<"La suma 1 es: "<<suma1.sum()<<endl;
    cout<<"Digite dos valores para a y b(suma2): ";
    cin>>a>>b;
    suma2.a=a;
    suma2.b=b;
      cout<<"La suma 2 es: "<<suma2.sum();
    return 0;
}