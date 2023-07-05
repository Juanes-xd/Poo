#include <iostream>
using namespace std;

int main(){
  int numero, suma=0;
 cout<<"Para observar el resultado digite 0 "<<endl;
  do
  {
   cout<<"Digite un numero entero: "; cin>>numero;
      if(numero > 0){
        suma += numero;
      }
  } while (numero !=0 );

     cout<<"La suma es: "<<suma<<endl;
    return 0;
}