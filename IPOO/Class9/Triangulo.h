#ifndef HH_Triangulo
#define HH_Triangulo

class Triangulo{
    private:
    double altura;
    double base;
    public:
    Triangulo();
    Triangulo(double _a,double _b);
    ~Triangulo();
    void SetAltura(double _a);
    void SetBase(double _b);
    double GetAltura();
    double GetBase();
    double GetArea();
};
#endif