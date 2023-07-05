#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  string sim,respuesta,again;
  int opor=3,aciertos=0,suma,resta,mul;
  float usuario, oper, div;
  cout<<"\n******Bienvenido******"<<endl;
  cout<<"Ejercicio de calculo mental con operaciones basicas"<<endl;
  cout<<"Desean empezar el juego?(s/n): ";
  cin>> respuesta;
  while(respuesta == ("s")){
    do
    {
       srand(time(NULL));
       int num1 = 10+rand()%99; 
       int num2 = 10+rand()%99;
       suma = num1 + num2;
       resta = num1 - num2;
       mul = num1 * num2;
       div = (float)num1/(float)num2;
       oper = (1+rand()%4);
       if(oper == 1){
         sim = "/";
       oper = div;
       }else if(oper == 2){
        sim = "*";
        oper = mul;
       }else if(oper == 3){
        sim = "+";
        oper = suma;
       }else if(oper == 4){
        sim = "-";
        oper = resta;
       }
     cout<<" ¿Cuanto es "<<num1<<" "<<sim<<" "<<num2<<"?: "<<endl;
       cin>>usuario;

       if(usuario == oper){
           aciertos++;
        cout<<" Excelente crack!, llevas "<<aciertos<<" aciertos "<<endl;
       }else{
           opor--;
           cout<<" Mal calculo, te quedan "<<opor<<" oportunidades y la respuesta es: "<<oper<<endl;
       }if(opor < 1){
        cout <<endl <<"deseas jugar nuevamente? s/n: ";
        cin >> respuesta;
        again = respuesta;
      }
     }
     while (opor != 0);
     if(again == "s"){
        opor=3;
     }
      if(aciertos==1){
        cout<<" Tuviste "<<aciertos<<" acierto"<<endl;;
      }
      else{
          cout<<" Tuviste "<<aciertos<<" aciertos "<<endl;
      }
  }
  cout<<"Ok, si tu quieres"<<endl;
    return 0;
}
