#include <iostream>
using namespace std;

class Nodo {
	//Atributos
	int dato; //char, float, string, objeto
	Nodo* enlace;//puntero..
public:
	//Constructor - inicializar los atributos
	Nodo(int dato)
	{
		this->dato = dato;
		enlace = NULL;//por que no apuntamos a ningun nodo
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
		return this->enlace;
	}
	void setEnlace(Nodo* enlace)
	{
		this->enlace = enlace;
	}
	void imprimir()
	{
		cout << "/-------------------\\" << endl;
		cout << "|Dato: " << dato << endl;
		cout << "|-------------------" << endl;
		cout << "|Enlace: " << enlace << endl;
		cout << "\\------------------/" << endl;
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
		Nodo* temp = new Nodo(dato);
		if (inicio == NULL)//lista vacia
		{
			inicio = temp;
		}
		else
		{
			Nodo* recorrido = this->inicio;
			while (recorrido->getEnlace() != NULL)
			{
				recorrido = recorrido->getEnlace();
			}
			recorrido->setEnlace(temp);
		}
	}
	void Imprimir()
	{
		int i = 1;
		Nodo* recorrido = inicio;
		cout << "Lista enlazada****************************" << endl;
		while (recorrido != NULL)
		{
			cout << "---> Nodo " << i++ << endl;
			recorrido->imprimir();
			recorrido = recorrido->getEnlace();
		}
		cout << "****************************" << endl << endl;
	}
	void ImprimirEnLinea()
	{
		Nodo* recorrido = inicio;
		cout << "Lista enlazada****************************" << endl;
		while (recorrido != NULL)
		{
			cout << recorrido->getDato() << "\t";
			recorrido = recorrido->getEnlace();
		}
		cout << "****************************" << endl << endl;
	}
	//Implementar la busqueda de un elemento en la lista enlazada
	//Si la encuentra tiene que imprimir la dirección de memoría
	//donde esta este elemento.
	void Buscar(int datoBuscado)
	{
		bool encontrado = false;
		Nodo* recorrido = inicio;
		while (recorrido != NULL)
		{
			if (recorrido->getDato() == datoBuscado)
			{
				cout << "Elemento encontrado en la dirección de memoría: " << recorrido << endl;
				encontrado = true;
				break;
			}
			else
			{
				recorrido = recorrido->getEnlace();
			}
		}
		if (encontrado == false)
		{
			cout << "El elemento buscado no fue encontrado." << endl;
		}
	}
	//------------------------------------
	//Implementar la eliminación de un nodo final
	void EliminarElementoFinal()
	{
		if (EstaVacia())
		{
			cout << "No hay elemento a eliminar" << endl;
		}
		else
		{
			if (inicio->getEnlace() == NULL)
			{
				inicio = NULL;
			}
			else
			{
				Nodo* recorrido = inicio;
				while (recorrido->getEnlace() != NULL)
				{
					//cout<<recorrido->getDato()<<"\t";
					if (recorrido->getEnlace()->getEnlace() != NULL)
						recorrido = recorrido->getEnlace();
					else
						break;
				}
				cout << endl;
				//recorrido->imprimir();
				recorrido->setEnlace(NULL);
				//recorrido->imprimir();
			}

		}

	}
	void EliminarElementoInicio()
	{
		if (EstaVacia())
		{
			cout << "No hay elemento a eliminar" << endl;
		}
		else
		{
			inicio = inicio->getEnlace();
		}
	}
	bool EstaVacia()
	{
		if (inicio == NULL)
			return true;
		else
			return false;
	}
	//Implementar la eliminación de un nodo inicio
};

int main()
{
	Lista edades = Lista();
	edades.Insertar(20);
	edades.Insertar(30);
	edades.Insertar(21);
	edades.Insertar(21);
	edades.Insertar(24);
	edades.Insertar(22);
	edades.Insertar(33);
	edades.ImprimirEnLinea();

	//edades.Buscar(15);

	/*cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();
	cout<<"EliminarElementoFinal"<<endl;
	edades.EliminarElementoFinal();
	edades.ImprimirEnLinea();*/

	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea(); cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea(); cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea(); cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();
	cout << "eliminación" << endl;
	edades.EliminarElementoInicio();
	edades.ImprimirEnLinea();

	int n;
	cin >> n;

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
