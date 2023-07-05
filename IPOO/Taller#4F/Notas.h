#pragma once 
#include <vector>
#include <iostream>
using namespace std;
class Notas{

    private:
    vector<string>nombre{};
    vector<double>nota{};

    public:
    Notas();
    Notas(string _nombre, double _nota);
    void setEstudiantes(string _nombre); 
    void setNotas(double _nota);
    string getLista();
    double getPromedio();
    double getMejorNota();
    double getPeorNota();
    string getEstudiante(string);
    void retirarEstudiante();

};

