#include <iostream>
#include <vector>
using namespace std;
/*
int main(){
 //Guardar numeros en los indices del arreglo de tamaño que se quiera.
    int numeros[100],n;
    cout<<"Digite el numero de elementos que va a tener el arreglo: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Digite un numero: ";
        cin>>numeros[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" -> "<<numeros[i]<<endl;
    }
    /*
    Para hacerlo en orden inverso.
    for (int i = n-1; i >=0; i--)
    {
        cout<<i<<" -> "<<numeros[i]<<endl;
    }
    
    return 0;
} 
*/

//-------------*******-----------------
/*
//Suma de los elemetos de un array.
int main(){
    int array[] = {1,2,3,4,5},suma=0;

    for (int i = 0; i < 5; i++)
    {
        suma += array[i];
    }
    cout<<"La suma del array es "<<suma<<endl;
    return 0;
}
*/
//---------******------------------
/*
//El numero mayor de un arreglo.
int main(){
  double n,mayor;
  vector<double> notas{};
  cout<<"Ingrese la cantidad de estudiantes a añadir: "<<endl; cin>>n;
  notas.resize(n);
std::cout << "Ingrese las notas\n"; // Es preferibla usar '\n' a std::endl
for( double & valor : notas )
    std::cin >> valor;
  for(int i=0; i <notas.size(); i++){
     if(notas[i] > mayor){
       mayor = notas[i];
     }
  }
  cout<<"La nota mayor de la clase es: "<<mayor<<endl;

    return 0;
}
*/
int main(){
    int n;
   double suma,promedio;
   vector<double> notas{};
   cout<<"Ingrese la cantidad de estudiantes a añadir: "<<endl; cin>>n;
   notas.resize(n);
   std::cout << "Ingrese las notas\n"; // Es preferibla usar '\n' a std::endl
   for( double & valor : notas )
    std::cin >> valor;
   for (int i = 0; i < notas.size(); i++)
   {
      suma += notas[i];
      promedio = suma/notas.size();
   }

   cout<<"El promedio es: "<<promedio;
   return 0;
}