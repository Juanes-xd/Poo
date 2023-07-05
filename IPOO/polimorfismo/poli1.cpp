#include <iostream>
#include <math.h>
//Polimorfismo
using namespace std;
class FiguraG{
 private:	
	string nombre="";
 private:
	double area=0;
 public:
 FiguraG(string _nombre):nombre(_nombre){//Constructor y de una vez se inicialzan los atributos.
 }
 double getArea();
 string getFigura(){
	return nombre;
 }
};

class Cuadrado:public FiguraG{
double lado;	
public:
Cuadrado(string _nombre, double _lado):FiguraG(_nombre),lado(_lado){}
double getArea(){
	return lado*lado; 	
		}
};

class Cubo:public FiguraG{
 double lado;
 public:
Cubo(string _nombre, double _lado):FiguraG(_nombre),lado(_lado){}
double getArea(){
    return 6*pow(lado,2);
}
};
class Pentagono:public FiguraG{
 double perimetro;
 double apotema;
 public:
 Pentagono(string _nombre,double _perimetro,double _apotema):FiguraG(_nombre),perimetro(_perimetro),apotema(_apotema){}
 double getArea(){
     return (perimetro*apotema)/2;
 }
};

int main(){
 Cuadrado c1("Cuadrado",2);
 Cubo cubo1("Cubo",4);
 Pentagono penta1("Pentagono",6,4);
 cout<<c1.getFigura()<<" : "<<c1.getArea()<<endl;
 cout<<cubo1.getFigura()<<" : "<<cubo1.getArea()<<endl;
 cout<<penta1.getFigura()<<" : "<<penta1.getArea()<<endl;

    return 0;
}






/*
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
const double pi=3.1416;	
cout<<fixed << setprecision(3) << pi <<endl;
double a = 16.666667888888888;
cout<<a<<endl;
cout << fixed << setprecision(1) << a << endl;
return 0;
}
*/
