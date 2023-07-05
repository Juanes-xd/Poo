#include <iostream>
using namespace std;
//Esta funcion genera desbordamiento de pila."StackOverflow"
void contRecF(int contar)
{
  cout <<"cuenta: "<<contar<< '\n';
  contRecF(contar+1); // contRecF() se llama a sí misma recursivamente  
}
//Esta funcion cuenta de manera iterativa e infinita.
void contIt(int num){
while (int i=num){
	num++;
	cout<<"cuenta: "<<num<<endl;
}
}


void contRecP(int contar)
{
    cout << "Apilar " << contar << '\n';
    if (contar >0){ // Condicion de parada
		contRecP(contar-1);
		}
    cout << "Desapilar " << contar << '\n';
}



void contar(int num){
    if(num > 0){
        contar(num-1);
    }
    cout<<num<<" ";
}


int sumar(int num){
    while(num >0){
       return  num + sumar(num-1);
    }
    return 0;
}


int main(){
int salida = sumar(10);
cout<<salida;
    return 0;
}