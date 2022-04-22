#include <iostream>
using namespace std;

class Nodo {
	//Atributos
	int dato; //char, float, string, objeto
	Nodo* enlace;//puntero...	
public:
	//Constructor - inicializar los atributos
	Nodo(int dato)
	{
		this->dato = dato;
		this->enlace = NULL;//por que no apuntamos a ningun nodo
	}
	//getter and setter
	int getDato()
	{
		return dato;
	}
	void setDato(int dato)
	{
		this->dato = dato;
	}
	Nodo* getEnlace()
	{
		return enlace;
	}
	void setEnlace(Nodo* enlace)
	{
		this->enlace = enlace;
	}
};

class Lista {
	Nodo* inicio;
public:
	Lista()
	{
		this->inicio = NULL;
	}
	void Insertar(int dato)
	{
		Nodo temporal = Nodo(dato);

		if (this->inicio == NULL)
		{
			this->inicio = &temporal;
		}
		else
		{
			Nodo* recorrido;
			recorrido = this->inicio;
			while (recorrido->getEnlace() != NULL)
			{
				recorrido = recorrido->getEnlace();
			}
			recorrido->setEnlace(&temporal);
		}
	}
	void Imprimir()
	{
		Nodo* recorrido;
		recorrido = this->inicio;
		while (recorrido->getEnlace() != NULL)
		{
			cout << recorrido->getDato() << endl;
			recorrido = recorrido->getEnlace();
		}
		cout << "****************************" << endl;
	}

};

int main()
{
	Lista edades = Lista();
	edades.Insertar(20);
	edades.Imprimir();
	edades.Insertar(30);
	edades.Imprimir();
	edades.Insertar(21);
	edades.Imprimir();
	edades.Insertar(21);
	edades.Imprimir();
	edades.Insertar(24);
	edades.Imprimir();
	edades.Insertar(22);
	edades.Imprimir();
	edades.Insertar(33);
	edades.Imprimir();

}
//int main()
//{
//	Nodo temp1 = Nodo(666);
//	cout << "Nodo temp1 Dato: " << temp1.getDato() << endl;
//	cout << temp1.getEnlace() << endl;
//
//	Nodo temp2 = Nodo(25555);
//	cout << "Nodo temp2 Dato: " << temp2.getDato() << endl;
//	cout << temp2.getEnlace() << endl;
//
//
//	////enlace de nodos
//	temp1.setEnlace(&temp2);
//	cout << "Despues de enlazar" << endl;
//	cout << "Nodo temp1 Dato: " << temp1.getDato() << endl;
//	cout << temp1.getEnlace() << endl;
//
//	cout << "Nodo temp2 Dato: " << temp2.getDato() << endl;
//	cout << temp2.getEnlace() << endl;
//}
