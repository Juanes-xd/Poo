#include <iostream>
#include <conio.h>
using namespace std;
class Tiempo{
 private:
 int horas,minutos,segundos;
 public:
 Tiempo(int,int,int);
 Tiempo(long);
 void MostrarTiempo();
 void mostrar2();
};
Tiempo::Tiempo(int hor,int min,int seg){
    horas = hor;
    minutos = min;
    segundos = seg;
}
Tiempo::Tiempo(long int tiempo)
{
 horas = int(tiempo/10000);
 minutos = int(-(tiempo / 10000)*100 + (tiempo / 100));
 segundos = int(tiempo - (tiempo / 100) * 100);
 
}

void Tiempo::MostrarTiempo(){
    cout<<"El tiempo es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}
void Tiempo::mostrar2()
{
 cout << "Tiempo de ";
 if (horas /10>=1)
 {
  cout << horas;
 }
 else
 {
  cout << "0" << horas << ":";
 }

 if (minutos / 10 >=1)
 {
  cout << minutos;
 }
 else
 {
  cout << "0" << minutos << ":";
 }

 if (segundos / 10 >= 1)
 {
  cout << segundos<< "\n\n";
 }
 else
 {
  cout << "0" << segundos<<"\n\n" ;
 }
}
int main(){
    Tiempo now(9,12,33);
    Tiempo now2(20139);
    now.MostrarTiempo();
    now2.mostrar2();
    getch();
    return 0;
}