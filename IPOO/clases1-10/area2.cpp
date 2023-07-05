#include <iostream>
using namespace std;

class Triangulo{
    private:
    double altura;
    double base;
    public:
    void Setaltura(double a){;
      altura = a;
    }
      void Setbase(double b){;
      base = b;
      }
      double GetBase(){
          return base;
      }
      double GetAltura(){
          return altura;
      }
      double GetArea(){
         return (base*altura);
      }
};

int main(){

 Triangulo tri1;
 double base1;
 double altura1;
 cout<<"Digite el valor de la base: ";
 cin>>base1;
 tri1.Setbase(base1);
 cout<<"Digite el valor de la altura: ";
 cin>>altura1;
 tri1.Setaltura(altura1);
 cout<<"El area del triangulo es de: "<<tri1.GetArea()<<endl;

    return 0;
}