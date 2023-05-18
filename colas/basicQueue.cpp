#include <iostream>
using namespace std;

struct Nodo{ 
    int dato;
    Nodo *siguiente; 
};
bool cola_vacia(Nodo *frente){ 
     return (frente == NULL) ? true : false; // OP ternario 
    // if(frente == NULL){ 
    //     return true;
    // } else{ 
    //     return false; 
    // }
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n){ 
    // Crear espacio en memoria 
    Nodo *nuevo_nodo = new Nodo;
    // Asignas nuevo nodo a dato que queremos insertar   
    nuevo_nodo ->dato = n; 
    nuevo_nodo ->siguiente = NULL; 
    // Asignación de punteros frente y fin hacia el nuevo nodo 
    if(cola_vacia(frente)){ 
        frente = nuevo_nodo; 
    }
    else{ 
        fin -> siguiente = nuevo_nodo; 
    }
    fin = nuevo_nodo; 
    cout<<"Elemento "<<n<<" agregado correctamente. "<<endl;
}

void eliminarElemento(Nodo *&frente, Nodo *&fin, int &n){
    // Obtener el valor del nodo 
    n = frente -> dato;
    // Crear un nodo aux y asignarle el frente de la cola
    Nodo *aux = frente;
    // Eliminar el nodo del frente de la cola 
    if(frente == fin){ 
        frente = NULL; 
        fin = NULL; 
    }else{ //hay mas de un nodo
        frente = frente -> siguiente; 
    }
    delete aux; 
}

int main()
{
    Nodo *frente = NULL; 
    Nodo *fin = NULL; 
    int dato; 
    cout<<"Digite un numero: "<<endl; 
    cin >> dato; 
    insertarCola(frente, fin, dato); 
    cout<<"Digite un numero: "<<endl; 
    cin >> dato; 
    insertarCola(frente, fin, dato);
    cout<<"Quitando nodos de la cola";
    while(frente != NULL){ 
        eliminarElemento(frente,fin,dato);
        if(frente != NULL){ 
            cout<<dato<<" , "<<endl; 
        } else{ 
            cout<<dato<<"."<<endl;
        }
    }
    return 0;
}