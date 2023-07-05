#include <iostream>
#include <math.h>
using namespace std;

class Cubo{
 private:
 double lado;
 public:
  void SetLado(double _l){
      lado=_l;
  }
  double GetVolumen(){
     
     return pow(lado,2);
  }
  double GetArea(){
      return 6* pow(lado,2);
  }
};
int main(){
 Cubo cubo1;
 double lado1;
 cout<<"Digite el valor del lado: ";
 cin>>lado1;
 cubo1.SetLado(lado1);
 cout<<"El volumen del cubo es "<<cubo1.GetVolumen()<< " y el area es "<<cubo1.GetArea();

    return 0;
}