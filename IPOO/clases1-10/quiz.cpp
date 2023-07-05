#include <iostream>
using namespace std;
int operacion(){

        int n = 12, suma = 0;
        for(int i = 1; i<=n; i++){
            if(i%2 == 0){
                suma = suma + 5;
            }
            else{
                suma = suma - 3;
            }
        }
       return suma;
}
int main(){
    cout<<operacion();
    return 0;
}
