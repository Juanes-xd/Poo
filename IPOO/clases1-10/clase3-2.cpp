#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"Digite el ultimo numero de la placa de su vehivulo: ";
  cin>>num;
  switch (num)
  {
  case 1:
      cout<<"Tiene pico y placa el lunes";
      break;
      case 2:
      cout<<"Tiene pico y placa el martes";
      break;
      case 3 :
      cout<<"Tiene pico y placa el miercoles";
      break;
      case 4:
      cout<<"Tiene pico y placa el jueves";
      break;
      case 5:
      cout<<"Tiene pico y placa el viernes";
      break;
      case 6:
      cout<<"Tiene pico y placa el sabado";
      break;
      case 7:
      cout<<"Tiene pico y placa el domingo";
      break;
     case 8:
      cout<<"Tiene pico y placa el lunes";
      break;
      case 9:
      cout<<"Tiene pico y placa el martes";
      break;
      case 0:
      cout<<"Tiene pico y placa el miercoles";
      break;
  default:
    cout<<"No es un numero entre 0 y 9"<<endl;
      break;
  }
    return 0;
}