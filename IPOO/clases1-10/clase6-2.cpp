#include <iostream>
using namespace std;
int main(){
  
  int arre [2][3];
  int valorf;
  int valorc;
  for (int i = 0; i < 2; i++)
  {
      for (int j = 0; j < 3; j++)
      {
          cout<<"Ingrese el numero  ["<<i<<"]"<<"["<<j<<"]: ";
          cin>>arre[i][j];
      }
  }
     for (int i = 0; i < 2; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             cout<<arre[i][j]<<" ";
         }
     }
     
      cout<<endl;
  
  

    return 0;
}