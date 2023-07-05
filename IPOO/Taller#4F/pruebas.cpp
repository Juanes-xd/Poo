#include <vector>
#include <iostream>
using namespace std;
int main(){

    vector<string>nombre{};
    vector<double>nota{};

        string lnombres;
        int n;
        string _nombre;
        string resp;

        cout<<"Ingrese los nombres de los alumnos: "<<endl;
        cin>>_nombre;
        nombre.push_back(_nombre);
        cout<<"\nDesea continuar?(s/n)";cin>>resp;

        while(resp == "s" ){
        cout<<"Ingrese los nombres de los alumnos: "<<endl;
        cin>>_nombre;
        nombre.push_back(_nombre);
        cout<<"\n¿Desea continuar?(s/n)";cin>>resp;
        }

        for (int i = 0; i < nombre.size(); i++)
        {
            cout<<nombre[i]<<" , ";
        }
 
/*
        int n1;
    cout<<"Ingrese la cantidad de notas a agregar: "<<endl; cin>>n1;
        nombre.resize(n1);
    cout<<"Ingrese las notas de los alumnos: "<<endl;
    cin>>_nota;
    nota.push_back(_nota);

        string lnombres;
        for (int i = 0; i < nombre.size(); i++)
        {
            lnombres += nombre[i];
        }
        return lnombres;
        */

    return 0;
}

