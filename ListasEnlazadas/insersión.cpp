#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{ 
    int dato;
    Nodo *siguiente; 
};
void insertarLista(Nodo *&lista, int n){ 
// Crear un nuevo nodo 
    Nodo *nuevo_nodo = new Nodo(); 
// Asignar a nuevo_nodo -> dato el elemento que queremos incluir a la lista. 
    nuevo_nodo ->dato = n; 
// Crear dos nodos auxiliares y asignar lista al primero de ellos 
    Nodo *aux1 = lista;
    Nodo *aux2;
// insertar el elemento a la lista 
    while((aux1 != NULL) && (aux1->dato < n)){ 
        lista = nuevo_nodo; 
        nuevo_nodo->siguiente = aux1; 
    }
    if(lista == aux1){ 
        lista = nuevo_nodo; 
    }else{ 
        aux2-> siguiente = nuevo_nodo; 
    }
    nuevo_nodo -> siguiente = aux1;
    cout<<"Elemento "<<n<<" agregado a la lista correctamente"<<endl;
}

int main()
{
Nodo *lista = NULL; 
int dato; 
cout<<"Digite un dato:"<<endl; 
cin>>dato; 
insertarLista(lista, dato); 
cout<<"Digite un dato:"<<endl; 
cin>>dato; 
insertarLista(lista, dato); 
return 0;
}

// Crear un nuevo nodo 
// Asignar a nuevo_nodo -> dato el elemento que queremos incluir a la lista. 
// Crear dos nodos auxiliares y asignar lista al primero de ellos 
// insertar el elemento a la lista 