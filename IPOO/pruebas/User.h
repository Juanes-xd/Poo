#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

#ifndef HH_User
#define HH_User


class User{
    private: 
    vector<string>Name;
    vector<int>puntaje;
    vector<string>Preguntas1;
    vector<string>Preguntas2;
    vector<string>Preguntas3;
    vector<string>Preguntas4;
    vector<string>Preguntas5;
    vector<string>Respuestas;
    
    public:
    User();
    //User(vector<string> _Name, vector<string> _puntaje, vector<string> _Preguntas1, vector<string>_Respuestas);
    ~User();
    void getName(); //obtener nombre.
    void getScore(int _puntaje); //tomar puntaje.
    void LeerArchivo(string _Name, string _Puntaje); //leer nombres/puntajes.
    void question(int categoria ,vector<string> _Preguntas);
    void saveArchivo();
    //string ordenarPtjes(string *_Name, string *_Puntaje);
    void ordenarPtjes();
    void OrganizeArchivo(); //ordenar puntajes.
    void getScoreEnd(); //retornar puntajes que se tienen.    
    void ContadorA(); //contador de aciertos.
};

#endif
