#include <iostream>
#include <conio.h>
using namespace std;

class Animal{
 private:
  int edad;
  public:
  Animal(int);
  virtual void comer();
};

class Humano : public Animal{
 private:
 string nombre;
 public:
 Humano(int,string);
 void comer();
};

class Perro : public Animal{
private:
 string nombre,raza;
public:
Perro(int,string,string);
void comer();
};

Animal::Animal(int _edad){
  edad=_edad;
}
Humano::Humano(int _edad,string _nombre) : Animal(_edad){
 nombre=_nombre;
}

Perro::Perro(int _edad,string _nombre,string _raza) : Animal(_edad){
 nombre = _nombre;
 raza = _raza;
}

void Animal::comer(){
  cout<<"Yo como";
}

void Humano::comer(){
  Animal::comer();
  cout<<" con cubiertos. "<<endl;
}

void Perro::comer(){
  Animal::comer();
 cout<<" en un plato y sin cubiertos."<<endl;
}
int main() {
  Animal *animales[2];
  animales[0] = new Perro(2,"lolis","fila");
  animales[1] = new Humano(18,"Camilo");
  animales[0]->comer();
  animales[1]->comer();
  getch();
  return 0;
}