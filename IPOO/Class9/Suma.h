#ifndef HH_Suma
#define HH_Suma
class Suma{
private:
	int	a, b;
public:
    Suma();//Constructor.
	Suma(int a,int b);//Constructor parametrizado.
	~Suma();//Destructor.
	void setA(int x);
	void setB(int y);
	int getA();
	int getB();
	int sum();	
};
#endif