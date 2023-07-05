#include <iostream>
using namespace std;

class Rectangulo{
    private:
    double largo;
    double ancho;
    public:
    Rectangulo(double,double);
    void area();
    void perimetro();
};
Rectangulo::Rectangulo(double _ancho,double _largo){
    ancho = _ancho;
    largo = _largo;
}
void Rectangulo::perimetro(){
  double peri = (largo*2) + (ancho*2);
 cout<<"El perimetro del rectangulo es: "<<peri<<endl;
}
void Rectangulo::area(){
    double are = (largo * ancho)/2;
    cout<<"El area del rectangulo es: "<<are<<endl;
}

int main(){
    double l,an;
    cout<<"Digite el largo del rectangulo dieferente de 0: "; cin>>l;
    cout<<"Digite el ancho del rectangulo diferente de 0: "; cin>>an;
    Rectangulo rectangulo1(l,an);
    rectangulo1.area();

    return 0;
}












/*
class Suma{
	public:
		int a=0, b=0;
	public:
    void setA(int _a){
       a=_a;
    }
    void setB(int _b){
             b=_b;
    }
    int getA(){
       return a;
    }
    int getB(){
       return a;
    }
		int sum(){
			return a + b;
		};
};

int main() {
  Suma suma1;
  suma1.a = 100;
  suma1.b = 200;
 
 cout<<suma1.sum()<<endl; 


 return 0;
}
*/