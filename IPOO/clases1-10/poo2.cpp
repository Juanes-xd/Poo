#include <iostream>
#include <conio.h>
using namespace std;
class Fecha{
 private: //Atributos.
   int dia;
   int mes;
   int anio;
   public: //Metodos.
   Fecha(int,int,int);
   Fecha(long);
   void MostrarFecha();
};
//Constructor 1.
Fecha::Fecha(int _dia,int _mes,int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}
Fecha::Fecha(long fecha){//Segundo constructor por si el usuario desea poner la fecha asi "20200804".
  anio = int(fecha/10000);//Extraemos los años.
  mes = int((fecha-anio*10000)/100);//Extraemos los meses.
  dia = int(fecha-anio*10000-mes*100);//Extraemos los dias.
}
void Fecha::MostrarFecha(){
    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
    Fecha today(4,8,2020);
    Fecha yesterday(20200803);
    today.MostrarFecha();
    yesterday.MostrarFecha();
  getch();
    return 0;
}