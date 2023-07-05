#include <iostream>
using namespace std;

int main(){
    int num1,num2,suma=0,mult=0,div=0,mod=0,rest=0;
    cout<<"Digite un numero: "<<endl;
    cin>>num1;
    cout<<"Digite otro numero: "<<endl;
    cin>>num2;
    suma = (num1 + num2);
    mult = (num1 * num2);
    div = (num1 /  num2);
    mod = (num1 % num2);
    rest = (num1 - num2);
    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<rest<<endl;
    cout<<"La multiplicacion es: "<<mult<<endl;
    cout<<"La division es: "<<div<<endl;
    cout<<"El resto es: "<<mod<<endl;
    
    return 0;
}