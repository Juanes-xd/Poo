#include <iostream>
#include <conio.h>
using namespace std;
class Rectangulo{
    private:
    int largo;
    int ancho;
    public:
    Rectangulo(int,int);
    void area();
    void perimetro();
};
Rectangulo::Rectangulo(int _ancho,int _largo){
    ancho = _ancho;
    largo = _largo;
}
void Rectangulo::perimetro(){
  int peri = (largo*2) + (ancho*2);
 cout<<"El perimetro del rectangulo es: "<<peri<<endl;
}
void Rectangulo::area(){
    int are = largo * ancho;
    cout<<"El area del rectangulo es: "<<are<<endl;
}

int main(){
    int l,an;
    cout<<"Digite el largo del rectangulo: "; cin>>l;
    cout<<"Digite el ancho del rectangulo: "; cin>>an;
    Rectangulo P(l,an);
    Rectangulo A(l,an);
    P.perimetro();
    P.area();

    getch();
    return 0;
}