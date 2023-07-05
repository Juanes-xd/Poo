#include <iostream>
using namespace std;
int main(){
  int n;
  
  cout<<"Digite un numero mayor que diez: "; cin>>n;
  if(n > 10){
  for (int i = 0; i <= n; i+=2)
  {
    cout<<i<<endl;
  }
  }
else{
  cout<<n<<" no es un numero mayor a diez "<<endl;
}

  return 0;
}