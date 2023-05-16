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
    Nodo *nuevo_nodo = new Nodo; 
    nuevo_nodo ->dato = n; 
    nuevo_nodo ->siguiente = NULL; 

    if(cola_vacia(frente)){ 
        frente = nuevo_nodo; 
    }
    else{ 
        fin -> siguiente = nuevo_nodo; 
    }
    fin = nuevo_nodo; 
    cout<<"Elemento "<<n<<" agregado correctamente. "<<endl;
}

int main()
{
    Nodo *frente = NULL; 
    Nodo *fin = NULL; 
    int dato; 
    cout<<"Digite un numero: "<<endl; 
    cin >> dato; 
    insertarCola(frente, fin, dato); 


    return 0;
}