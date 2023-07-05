//Conseguir el gasto anual de la planta
#include <iostream>
#include <string>

#include "Monitor.cpp"
#include "Persona.cpp"
#include "Director.cpp"
#include "Investigador.cpp"

using namespace std;

int main(){

//Variables   
string name, lastName;
int code, cedula; 
//Objetos
Director director;
Investigador investigador1,investigador2;
Monitor monitor1,monitor2;

//Inicio del programa
cout<<"Bienvenido al programa que calcula el costo anual del proyecto :3"<<endl;

//Datos personales de objetos
//Director
cout<<"\n\n*** DIRECTOR ***\n\n";
cout<<" Digite el nombre de su director: ";cin>>name;
cout<<" Digite el apellido de su director: ";cin>>lastName;
cout<<"Digite la cedula de su director: ";cin>>cedula;
director.setNombre(name);
director.setApellido(lastName);
director.setCedula(cedula);

int totalDirector = director.bonificacion() + director.sueldoInvestigador();
cout<<" El salario anual en total del Director es de: "<<totalDirector<<endl;

//Investigador1
cout<<"\n\n*** INVESTIGADOR1 ***\n\n";
cout<<" Digite el nombre de su investigador1: ";cin>>name;
cout<<" Digite el apellido de su investigador1: ";cin>>lastName;
cout<<"Digite la cedula de su investigador1: ";cin>>cedula;

investigador1.setNombre(name);
investigador1.setApellido(lastName);	
investigador1.setCedula(cedula);

int costoInvestigador1 = investigador1.sueldoInvestigador();
cout<<" El salario anual del investigador1 es: "<<costoInvestigador1<<endl;

//Investigador2
cout<<"\n\n*** INVESTIGADOR2 ***\n\n";
cout<<" Digite el nombre de su investigador2: ";cin>>name;
cout<<" Digite el apellido de su investigador2: ";cin>>lastName;
cout<<"Digite la cedula de su investigador2: ";cin>>cedula;

investigador2.setNombre(name);
investigador2.setApellido(lastName);	
investigador2.setCedula(cedula);

int costoInvestigador2 = investigador2.sueldoInvestigador();
int totalInvestigadores = costoInvestigador1 + costoInvestigador2;
cout<<" El salario anual del investigador2 es: "<<costoInvestigador2<<endl;

//Total investigadores
cout<<" El costo total  de los investigadores es: "<<totalInvestigadores<<endl;


//Monitor1
cout<<"\n\n*** MONITOR1 ***\n\n";
cout<<" Digite el nombre de su monitor1: ";cin>>name;
cout<<" Digite el apellido de su monitor1: ";cin>>lastName;
cout<<" Digite el codigo de su monitor1: ";cin>>code;

monitor1.setNombre(name);
monitor1.setApellido(lastName);
monitor1.setCodigo(code);

int costoMonitor1 = monitor1.sueldoMonitor();
cout<<" El salario anual del monitor1 es: "<<monitor1.sueldoMonitor()<<endl;

//Monitor2
cout<<"\n\n*** MONITOR2 ***\n\n";
cout<<" Digite el nombre de su monitor2: ";cin>>name;
cout<<" Digite el apellido de su monitor2: ";cin>>lastName;
cout<<" Digite el codigo de su monitor2: ";cin>>code;
monitor2.setNombre(name);
monitor2.setApellido(lastName);
monitor2.setCodigo(code);

int costoMonitor2 = monitor2.sueldoMonitor();
cout<<" El salario anual del monitor2 es: "<<costoMonitor2<<endl<<endl;

//Total monitores
int totalMonitor = costoMonitor1 + costoMonitor2;
cout<<"El salario anual de los 2 monitores es de: "<<totalMonitor<<endl<<endl;




//Coste anual de todo el proyecto
cout<<" El costo anual de todo este --GRAN PROYECTO-- es de: "<< totalMonitor + totalInvestigadores + totalDirector<<endl;

return 0;
}