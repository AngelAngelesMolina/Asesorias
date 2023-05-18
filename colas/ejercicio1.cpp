/*Ejercicio 1 - HAcer un programa en c++ utilizando colas que contenga el siguiente menu: 

1. Insertar un caracter a una cola 
2. Mostrar todos los elementos de la cola 
3. Salir 
*/

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

void insertarCola(Nodo *&frente, Nodo *&fin, char n){ 
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

void eliminarElemento(Nodo *&frente, Nodo *&fin, char &n){
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



void menu(){
    Nodo *frente = NULL; 
    Nodo *fin = NULL; 
    int opc; 
    char dato; 
    do{
        cout<<"\t MENU"<<endl; 
        cout<<"1. Insertar un caracter a una cola "<<endl; 
        cout<<"2. Mostrar todos los elementos de la cola "<<endl; 
        cout<<"3. Salir "<<endl; 
        cout<<"Digite la opcion que desea: "<<endl;
        cin>>opc; 
        switch(opc){ 
            case 1: 
            cout<<"1. Inserta un caracter: "<<endl; cin>>dato; 
            insertarCola(frente,fin,dato);
            break; 
            case 2: 
            cout<<"2. Mostrando elementos de la cola: "<<endl; 
            while(frente != NULL){ 
                eliminarElemento(frente,fin,dato);
                if(frente != NULL){ 
                    cout<<dato<<" , "; 
                } else{ 
                    cout<<dato<<"."<<endl;
                }
            }
            // system("pause"); 
            break; 
            case 3: break; 
        }
        // system("cls");
    }while(opc !=3);
}

int main()
{
    menu(); 
    return 0;
}