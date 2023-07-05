#include "Cubo.h"
#include <math.h>

void Cubo::SetLado(double _l){
    this->lado=_l;
}

double Cubo::GetVolumen(){
    return pow(lado,2);
}
double Cubo::GetArea(){
    return 6*pow(lado,2);
}