#include <iostream>
#include <stdio.h>
#include "Notas.cpp"
using namespace std;

int main(){
	//objeto para la clase vector.
	//bool valor = true;
	string name;
	double note;
	int opcion;
	string change;
	
    Notas user1;
	cout<<"\n ********** BUEN DIA/TARDE/NOCHE **********\n"<<endl;
	do
	{
	cout<<"Menu: "<<endl;
	cout<<"1. Para ingresar los nombres"<<endl;
	cout<<"2. Para ingresar las notas"<<endl;
	cout<<"3. Para revisar la lista"<<endl;
	cout<<"4. Para obtener el promedio de la clase"<<endl;
	cout<<"5. Para obtener la mejor nota de la clase"<<endl;
	cout<<"6. Para obtener la peor nota de la clase"<<endl;
	cout<<"7. Para revisar un estudiante en especifico"<<endl;
	cout<<"8. Para eliminar un estudiante"<<endl;
	cout<<"Ingrese la opcion que desea: "<<endl; cin>>opcion;
	switch (opcion)
	{
	case 1:
	cout<<"Ingrese los nombres de los estudiantes: "<<endl; cin>>name;
	user1.setEstudiantes(name);
	break;
	case 2:
	cout<<"Ingrese las notas de los estudiantes: "<<endl; cin>>note;
	user1.setNotas(note);
	break;
	case 3:
	cout<<"La lista es: "<<endl;
	user1.getLista();
	break;
	case 4:
	cout<<"El promedio de la clase es: ";
	user1.getPromedio();
	break;
	case 5:
	cout<<"La mejor nota es: ";
	user1.getMejorNota();
	break;
	case 6:
	cout<<"La peor nota: ";
	user1.getPeorNota();
	break;
	case 7:
	cout<<"Ingrese el nombre del estudiante que desea revisar: "<<endl; cin>>name;
	user1.getEstudiante(name);
	break;
	case 8:
	user1.retirarEstudiante();
	default:
	cout<<"No ingresaste un numero valido";
		break;
	}
	cout<<"¿Desea realizar mas acciones?(s/n): "<<endl; cin>>change;
	} while (change == "s");
	 system("PAUSE");
	cout<<"Sesion terminada, tenga buen dia."<<endl;
	return 0;
}














/**
	// USUARIOS Y NOTAS....

	do{
		cin.get(); //
		cout<<"\nIngrese el nombre del estudiante: ";getline(cin, nombre); 
		busqueda.setEstudiantes(nombre);
		//cin.get();

		cout<<"\nIngrese la nota del estudiante: ";cin>>nota;
		busqueda.setNotas(nota);
        cout<<"¿Desea continuar con otro estudiante?(s/n): ";cin>>opcion;

		cout<<"\n¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n";

		if(opcion == 's'){
			valor = true;
		}
		else if(opcion == 'n'){
			valor = false; 
		}
		else{
			cout<<"CARGANDO...\n";
			cout<<"SALIENDO DEL PROGRAMA..."<<endl;
			break;
		}
	}

	while(valor == true);

	//REGISTRO DE PROMEDIOS, DATOS, CON NOTAS PARA LOS ESTUDIANTES...

	busqueda.getLista();
	busqueda.getPromedio();
	busqueda.getMejorNota();
	
return 0;
    }
	*/