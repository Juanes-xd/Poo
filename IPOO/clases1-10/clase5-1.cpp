#include <iostream>
using namespace std;
int main(){
   int nums[4]; 

  for (int i=0;i<=3;i++)
   {
       cout<<"Digite el valor en la posicion "<<i<<":"<<endl;
       cin>>nums[i];
       cout<<nums[i]<<endl;
    }
  for (int x = 0; x < 4; x++)
  {
      cout<<nums[x];
  }
  

    return 0;
}