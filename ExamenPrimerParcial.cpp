#include <iostream>
#include <conio.h>

using namespace std;

struct nodo {
	int valor;
	struct nodo *ptr;
	struct Nodo *siguiente;
}*inicio,*actual, *fin;

void Recorrido (int);
void MostrarRecorrido (int);

int main ()
 {
 	int Arreglo [2];
 	for (int i=0; i<2; i++)
 	{
 		cout << "Ingresa tus numeros " << endl;
 		cout << i << endl;
 		
 	}
	return 0;
 	  
 }
  void Recorrido ()
  {
  	inicio=nodo;
 	inicio->ptr = NULL;
	inicio->valor=2;
	inicio->valor;
	cout << "Mostrando recorrido " << endl;
	if (valor=siguiente)
	{
		inicio=valor;
		valor=actual;
		actual=actual->siguiente;
		actual=fin;
		fin=valor;
	}

  	
  }

void MostrarRecorrido (){
	actual=inicio;
	cout << "Recorrido -> " << actual->valor << endl;
	actual=actual->siguiente;
}
