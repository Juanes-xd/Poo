#include <iostream>
using namespace std;
class Nodo
{
    private:
        int info = 0;
        Nodo* sig = NULL;
    public:
        Nodo();
        ~Nodo();
        void setInfo(int _info);
        int getInfo();
        Nodo* getSig();
        void setSig(Nodo* _sig);
};
//Definición clase cola
class Cola
{
    private:
        Nodo* cabeza;
        Nodo* fin;
    public:
        Cola();
        ~Cola();
        void queue(int _info);
        void dequeue();
        void list();
        void front();
};
Nodo::Nodo(){}
Nodo::~Nodo(){}
void Nodo::setInfo(int _info){
    this -> info = _info;
}
int Nodo::getInfo(){
    return info;
}
void Nodo::setSig(Nodo* _sig){
    this -> sig = _sig;
}
Nodo* Nodo::getSig(){
    return this -> sig;
}
Cola::Cola()
{
    cabeza = NULL;
    fin = NULL;
}

Cola::~Cola()
{
    Nodo * raiz = cabeza;
    Nodo * borrar;
    while (raiz != NULL)
    {
        borrar = raiz;
        raiz = raiz->getSig();
        delete borrar;
        borrar = NULL;
    }
}

void Cola::queue(int _info)
{
    Nodo * nuevo = new Nodo();
    nuevo->setInfo(_info);
    nuevo->setSig(NULL);
    if (cabeza==NULL) 
    {
        cabeza = nuevo;
        fin = nuevo;
    }
    else {
        fin->setSig(nuevo);
        fin = nuevo;
    }
    cout<<"Se agrego el "<<_info<<" a la cola"<<endl;
}

void Cola::dequeue()
{
    if (cabeza!=NULL)
    {
        int info = cabeza->getInfo();
        Nodo* borrar = cabeza;
        if (cabeza == fin)
        {
            cabeza = NULL;
            fin = NULL;
        }
        else 
        {
            cabeza = cabeza->getSig();
        }
        delete borrar;
        borrar = NULL;
        cout<<"Se elimino el "<<info<<endl;
    }
    else
		cout<<"No hay elementos en la cola\n";
}
void Cola::list()
{
	if(cabeza!=NULL){
	 Nodo * raiz = cabeza;
     cout << "Elementos en la cola:\n";
     while (raiz != NULL)
     {
      cout << raiz->getInfo() << " ";
      raiz = raiz->getSig();
   	 }
      cout << "\n";
   }else{
  	 cout<<"No hay elementos en la cola\n";
   } 
}
void Cola::front(){
	if (cabeza==NULL){
		cout<<"No hay elementos en la cola\n";
	}
	else{
		cout<<"El elemento en el frente es: "<<cabeza->getInfo();
	}
}
int main()
{
  Cola * cola = new Cola();
   	int continuar, info;
do {

	cout<<"\n** Seleccione una accion a realizar en la Cola ** \n";
	cout<<"1.Encolar 2.Listar 3.Desencolar 4.Ver frente 5.Salir\n";
	cin>>continuar;
	
		if(continuar>0 || continuar <6){
			switch(continuar){
				case 1:
					cout<<"Ingrese el valor a encolar: ";
					cin>>info;
					cola->queue(info);
					break;
				case 2:
					cola->list();
					break;
				case 3:
					cola->dequeue();
					break;
				case 4: 
					cola->front();
					break;
		}
		}
		else{
			cout<<"Seleccione una opcion valida\n";
		}
}while (continuar!=	5);

//    Cola * cola = new Cola();
    cola->queue(info);
    cola->queue(info);
    cola->queue(info);
    cola->list();
    cola->dequeue();
	cola->dequeue();
    cola->list();
    delete cola;
    cola = NULL;
    return 0;
    
    
}