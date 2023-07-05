
#include <iostream>
using namespace std;

class Empleado
{
	int salario;

  public:
	//setter
	void setSalario(int s)
	{
		salario = s+5000;
	}
	//getter
	int getSalario()
	{
		return salario;
	};
};

int main()
{
	Empleado emp1;
	emp1.setSalario(50000);
	cout << emp1.getSalario();
	return 0;
}


/*
class MyClass {
  public:    // Publico 
    int x;   
  private:   // Privado
    int y;   
  protected:
  	int z; // Protegido
};

int main() {
  MyClass myObj;
  cout<<myObj.x;
  myObj.x = 25; // Permitido 
  cout<<endl<<myObj.x<<endl;
  cout<<endl<<myObj.z<<endl;
  
//  myObj.y = 50; // No Permitido
//  myobj.z = 55; // No Permitido
  return 0;

}
*/