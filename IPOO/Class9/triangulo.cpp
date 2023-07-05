#include "Triangulo.h"
Triangulo::Triangulo(){}
Triangulo::Triangulo(double _a,double _b){
    this->altura=_a;
    this->base=_b;
}
Triangulo::~Triangulo(){}
void Triangulo::SetAltura(double _a){
    this->altura=_a;
}
void Triangulo::SetBase(double _b){
    this->base=_b;
}
double Triangulo::GetAltura(){
    return altura;
}
double Triangulo::GetBase(){
    return base;
}
double Triangulo::GetArea(){
    return (base*altura)/2;
}