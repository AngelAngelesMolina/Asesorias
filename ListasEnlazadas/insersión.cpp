#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{ 
    int dato;
    Nodo *siguiente; 
};

Nodo *lista = NULL; 

void insertarLista(Nodo *&lista, int n){ 
// Crear un nuevo nodo 
    Nodo *nuevo_nodo = new Nodo(); 
// Asignar a nuevo_nodo -> dato el elemento que queremos incluir a la lista. 
    nuevo_nodo->dato = n; 
// Crear dos nodos auxiliares y asignar lista al primero de ellos 
    Nodo *aux1 = lista;
    Nodo *aux2;
// insertar el elemento a la lista 
    while((aux1 != NULL) && (aux1->dato < n)){ 
        aux2 = aux1; 
        aux1 = aux1->siguiente; 
    }
    if(lista == aux1){ 
        lista = nuevo_nodo; 
    }else{ 
        aux2->siguiente = nuevo_nodo; 
    }
    nuevo_nodo -> siguiente = aux1;
    cout<<"Elemento "<<n<<" agregado a la lista correctamente"<<endl;
}
void mostrarElementos(Nodo *lista){ 
    // Crear un nuevo nodo actual 
    Nodo *actual = new Nodo(); 
    // Igualar ese nuevonodo actua
    actual = lista; 
    // Recorrer la lista de inicio
    while(actual != NULL ){ 
        cout<<actual -> dato<<" -> "; 
        actual = actual -> siguiente;
    }
}

void buscarElemento(Nodo *lista, int n){ 
    bool band = false; 
// Crear un nuevo nodo(actual)
    Nodo *actual = new Nodo(); 
// Igualar ese nodo(actual) a la lista.
    actual = lista;
// Recorrer la lista
    while((actual != NULL) && (actual-> dato <= n) ){ 
    // Determinar si el elemento existe o no en la lista
        if(actual-> dato == n){ 
            band = true;
        }
        actual = actual->siguiente;
    }
    if(band == true){ 
        cout<<"Elemento "<<n<<" Si ha sido encontrado en la lista"<<endl;
    } else{ 
        cout<<"Elemento "<<n<<" NO ha sido encontrado en la lista"<<endl;
    }

}


void menu(){ 

    int opcion, dato; 
    do{
    cout<<"\t Menu"<<endl<<"\t 1. Insertar elementos en la lista"<<"\n\t 2. Mostrar los elementos en la lista"<<"\n\t 3. Buscar elemento"<<"\n\t 4. Salir"<<endl; 
    cout<<"Digite la opcion que desea: "<<endl; cin>>opcion;
        switch(opcion){ 
            case 1: 
                cout<<"Digite un dato:"<<endl; 
                cin>>dato;
                insertarLista(lista, dato); 
            break;
            case 2: 
                mostrarElementos(lista); 
            break;
            case 3: 
                cout<<"Digite el dato a buscar:"<<endl; 
                cin>>dato;
                buscarElemento(lista,dato); 
            break;
            case 4: break;
        }
    }while(opcion !=4); 
}

int main()
{
menu();
return 0;
}

// Crear un nuevo nodo 
// Asignar a nuevo_nodo -> dato el elemento que queremos incluir a la lista. 
// Crear dos nodos auxiliares y asignar lista al primero de ellos 
// insertar el elemento a la lista 