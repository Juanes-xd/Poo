#include <iostream>
using  namespace std;


int main() {

  float pagoingreso = 0.1718750f;
  float pagoTotal = 0;
  float capacidadEstadio = 48712;
  float dineroAcumulado = 0;
  int numeroMaxAsistentes = 50*48712;
  float conteoAsistentes = 0;
 
 while(conteoAsistentes <= numeroMaxAsistentes){
   conteoAsistentes++;
   dineroAcumulado = dineroAcumulado+pagoingreso;
 }


 cout<<"Girar cheque por: "<<dineroAcumulado<<"";
 cout<<"\n";
 cout<<"Pago que deberia haber sido: "<<numeroMaxAsistentes*pagoingreso<<"";


 
  return 0;
} 