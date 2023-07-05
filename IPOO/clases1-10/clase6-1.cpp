#include <iostream>
using namespace std;
int main(){
  int matriz [3][5]= {
      {123,25,56,3,45}
  ,   {32,44,56,45,76}
  ,   {1,2,3,4,5}};
   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j <5; j++)
       {
           cout<<matriz[i][j]<<" ";

       }
       cout<<endl;
   }
   
    return 0;
}