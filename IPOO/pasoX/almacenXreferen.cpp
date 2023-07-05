#include <iostream>
using namespace std;
int main(){
 int p=7;
 int& q=p; //alias a la variable p
 cout <<" variable p: "<<p<<" almacenada en "<<&p<<endl;
 cout <<" variable q: "<<q<<" almacenada en "<<&q<<endl;

    return 0;
}