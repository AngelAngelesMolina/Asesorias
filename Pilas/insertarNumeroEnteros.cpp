// Hacer un programa para agregar numeros a una pila hasta que el usuario 
// lo decida, despues mostrar los numeros introducidos en la pila >

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{ 
    int dato;
    Nodo *siguiente; 
};

void agregarPila(Nodo *&pila, int n){ // pila -> puntero y se pasa el valor por referencia.
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

void sacarPila(Nodo *&pila, int &n){ 
    // aux de tipo nodo 
    Nodo *aux = pila;
    n = aux->dato; 
    pila = aux->siguiente; 
    delete aux; 
}

int main()
{
    int dato; 
    char resp; 
    Nodo *pila = NULL; //pila vacia 
        do{
            cout<<"Digite un numero: "; 
            cin>>dato; 
            agregarPila(pila, dato);

            cout<<"Deseas agregar otro elemento a la pila? (s/n): "; 
            cin>>resp; 
        }while(resp =='S' || resp == 's'); 
        cout<<"\n Sacando los elementos de la pila"<<endl; 
            while(pila != NULL ){ // No sea el final de la pila
            sacarPila(pila,dato);
                if(pila != NULL){ 
                    cout<<dato<<" , ";
                }
                else{ 
                    cout<<dato<<"."<<endl;
                }
            }
    return 0;
}
