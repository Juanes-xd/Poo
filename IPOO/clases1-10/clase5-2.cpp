#include <iostream>
using namespace std;
int main(){
   
    double nums[3];
     nums[2] = nums[0]+nums[1];

      for (int i=0;i<=2;i++)
   {
       cout<<"Digite el valor en la posicion "<<i<<":"<<endl;
       cin>>nums[i];
       cout<<nums[2]<<endl;
    }
    return 0;
}