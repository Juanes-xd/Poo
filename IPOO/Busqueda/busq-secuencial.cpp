#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {7, 3, 12, 7, 23, 4};
    int encontrado, buscar, i{};
    buscar = 4; //Elemento a buscar
    i=0;

    while(i<nums.size()){

    if(nums[i] == buscar){
    encontrado=1;

    cout<<"Se encontro el dato en la posicion "<<i<<endl;
    break;
    }
    i++;
    }

    if(encontrado == 0){
    cout<<"No se encontro el dato en la lista "<<endl;
    }
    return 0;
}