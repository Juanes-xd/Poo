//asociaciones entre clases: agregación de clases
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
 
class Departamento
{
private:
  std::vector <Teacher*> m_teacher{}; 
public:
 Departamento(){}
 //Departmento(Teacher* teacher) : m_teacher(teacher)  {	 }
Departamento(Teacher* teacher)  {
this->m_teacher.push_back(teacher);
	 }
void addTeacher(Teacher* t){
 	m_teacher.push_back(t);
 }
string getNameP()  { 
 string lteachers;
  	for (int i=0 ; i<m_teacher.size(); i++){
	  lteachers += m_teacher[i]->getName()+"\n "; 
	} 
return lteachers;
 }
};
 
int main()
{
  Teacher t1("Jose"); 
  Teacher t2("Flavio");
  Teacher t3("Josefo");
  Teacher t4("Ananias");
  Departamento m1;
  Departamento m2(&t1);
  m1.addTeacher(&t1);
  m1.addTeacher(&t2);
  m1.addTeacher(&t3);
  m1.addTeacher(&t4);
  cout<<"Depto M1 - profesores:\n "<<m1.getNameP()<<endl;
  t1.setName("Pedro");
  cout<<"Profesor 1: "<<t1.getName()<<endl;
  cout<<"Depto M1 - profesores:\n "<<m1.getNameP()<<endl;
  cout<<"Depto M2 - profesores:\n "<<m2.getNameP()<<endl;
  return 0;
}
