#include <iostream>

using namespace std;
int main(){
      int i=0,num=0;
  while(i!=3)
   {  
	cout<<"Escriba un # del 1 al 10"<<endl;
	cin>>num;
	if(num==3)
		{
    		i=num;
			cout<<"Bien, acertaste"<<endl;
    	}
    else
		{
			cout<<"Intenta de nuevo"<<endl;   	
		}
  	}	
  return 0;
}





/*
int main(){
int i = 7;
    do{
     cout<<i<<endl;
       i++;
 }while(i<6);

    return 0;
}
*/


   /*int i = 0;
    while(i<6){
     cout<<i<<endl;
       i++;
 }

    return 0;
}
*/