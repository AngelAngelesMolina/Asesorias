#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{ 
    int dato;
    Nodo *siguiente; 
};

void agregarPila(Nodo *&pila, int n){ \
// 1. Crear espacio de memoria para nuevo nodo 
Nodo *nuevo_nodo = new Nodo();
// 2. Rellenar el dato
nuevo_nodo-> dato = n; 
//3. cargar el puntero pila dentro del nodo siguiente 
nuevo_nodo->siguiente = pila;
//4. Asignar el nuevo nodo a pila
pila = nuevo_nodo; 

cout<<"Elemento "<<n<<" agregado correctamente"<<endl;
}

int main()
{
    int n1,n2; 
Nodo *pila = NULL; 
cout<<"Digite un numero: "<<endl;
cin>>n1; 
agregarPila(pila,n1);
cout<<"Digite un segundo numero: "<<endl;
cin>>n2; 
agregarPila(pila,n2);
return 0;
}

// Crear el espacio en memoria para almacenar un nodo 
// Cargar el valor dentro del nodo(dato)
// cargar el puntero pila dentro del nodo siguiente 
// Asignar el nuevo nodo a pila