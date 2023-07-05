#include <iostream>
using namespace std;
int main(){
   double nota[2];
   string respuesta;
    float promedio;
    do
     {
        cout<<"Agregue la primer nota: ";
        cin>>nota[0];
        cout<<"Agregue la segunda nota: ";
        cin>>nota[1];
        cout<<"Agregue la tercer nota: ";
        cin>>nota[2];
        promedio = ((float)nota[0]*0.3)+((float)nota[1]*0.3)+((float)nota[2]*0.4);
        cout<<"El promedio es: "<<promedio<<endl;
        cout<<"¿Desea ingresar mas notas? (s/n): "<<endl;
        cin>>respuesta;
        if(respuesta != "s"){
          promedio = 6.0;
        }
    } while (promedio <= 5.0 );
    cout<<"Ok";
    return 0;
}