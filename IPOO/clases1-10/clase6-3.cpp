#include <iostream>
using namespace std;

int main(){
    int A[3][3]={{2,0,1},{3,0,0},{5,1,1}};
    int B[3][3]={{1,0,1},{1,2,1},{1,1,0}};
    int C[3][3];
    int D[3][3];
    // Recorrer y sumar.
 for (int i = 0; i < 3; i++){
     for (int j = 0; j < 3; j++)
     {
         C[i][j]= A[i][j] + B[i][j];
     }
     
 }
 // Recorrer y restar.
 for (int i = 0; i < 3; i++){
     for (int j = 0; j < 3; j++)
     {
         D[i][j]= A[i][j]-B[i][j];
     }
     
 }
 //Mostrar.
 for (int i = 0; i < 3; i++){
     for (int j = 0; j < 3; j++)
     {
         cout<<C[i][j]<<" ";
     }
     cout<<endl;
 }
 cout<<endl;
 for (int i = 0; i < 3; i++){
     for (int j = 0; j < 3; j++)
     {
         cout<<D[i][j]<<" ";
     }
     cout<<endl;
 }

    return 0;
}


