//Metodos constructores y modificadores(Gettters and Setters).
#include <iostream>
#include <conio.h>
using namespace std;
class Punto{
    private:
     int x,y;
    public:
    Punto();
    void setPunto(int,int);
    int getPuntox();
    int getPuntoy();
};
Punto::Punto(){

}
//Establecemos valores a los atributos.(Setter).
void Punto::setPunto(int _x,int _y){
 x = _x;
 y = _y;
}
//Obtener los valores de mis atributos.(Getters).
int Punto::getPuntox(){
    return x;
}
int Punto::getPuntoy(){
    return y;
}
int main(){

    Punto punto1;
    punto1.setPunto(15,10);
    cout<<punto1.getPuntox()<<endl;
    cout<<punto1.getPuntoy()<<endl;


    getch();
    return 0;
}