#include <iostream>
using namespace std;

int main(){
 float notas[2],promedio;
 float suma;
 for (int i = 0; i <= 2; i++){
     
 do{
     cout<<"Ingrese nota "<<i+1<<":"<<endl;
     cin>>notas[i];

   }while (notas[i]<0 && notas[i] > 5.0 );
      
      suma += (notas[0]*0.3)+(notas[1]*0.3)+(notas[2]*0.4);
 }
  promedio = suma/3;
  cout<<"El promedio es: "<<promedio;
  return 0;
}