#include <iostream>
#include <vector>
#include <locale>
#include "User.cpp"
using namespace std;


int main(){
    User usuario1;
    usuario1.getName();
    usuario1.getScore(3000);
    usuario1.saveArchivo();
    
return 0;
};