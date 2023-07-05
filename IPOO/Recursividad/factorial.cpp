#include <iostream>
using namespace std;

 double factorial(double n){
    //long double fact;
    if (n==0){
      return 1;
    }
    else{
     return n*factorial(n-1);
    }
}

int main(){
    double num;
    cout<<"Digite el numero deseado para calcular el factorial: ";
    cin>>num;
    cout<<"El factorial es: "<<factorial(num);
    return 0;
}