#include <iostream>
using namespace std;

int main(){
    int n1,n2,t;
    cout<<"Digite un numero mayor que diez: ";
    cin>>n2;
    cout<<"Digite otro numero mayor que diez: ";
    cin>>n1;
    if(n1 > 10 and n2 > 10){
       for (int i = n2; i >= n1; i--)
       {
           if(i%2==0){

           cout<<i-1<<endl;

           }
       }
    }
    else{
        cout<<"No son numeros mayores a diez"<<endl;
    }
    return 0;
}