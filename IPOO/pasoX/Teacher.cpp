#include <iostream>
#include <vector>
using namespace std;
class Teacher
{
private:
  string t_name;
public:
  Teacher(string _tname) : t_name{ _tname }
  {
  }
 void setName( string _tname){
	this->t_name=_tname;
 }
  string getName()  { 
  return t_name; 
  }
  
};
 
class Departmento
{
private:
  Teacher* m_teacher; 
 
public:
  Departmento(Teacher *teacher) : m_teacher(teacher)  {	 }
  string getNameP()  { 
 	return m_teacher->getName();
  }
};
 
int main()
{
  Teacher t1( "Jose" ); 
  Departmento matematicas(&t1);
  cout<<"Depto: profesor: "<<matematicas.getNameP()<<endl;
  t1.setName("Pedro");
  cout<<"Profesor: "<<t1.getName()<<endl;
  cout<<"Depto: profesor: "<<matematicas.getNameP()<<endl;
  return 0;
}
