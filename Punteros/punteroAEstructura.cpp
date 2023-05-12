#include <iostream>
using namespace std;

struct Persona { 
char nombre[30]; 
int edad; 
}
persona, *puntero_persona = &persona;

void pedirDatos(){
    cout<<"Ingresa tu nombre: "<<endl; 
    // cin.getline(persona.nombre,30,'\n');
    cin.getline(puntero_persona->nombre,30,'\n');
    cout<<"Ingresa tu edad: "<<endl; 
    cin>>puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona){ 
    // cout<<"El nombre de la persona es:"<<persona.nombre; 
    cout<<"El nombre es: "<<puntero_persona->nombre<<endl;
    cout<<"Su edad es: "<<puntero_persona->edad<<endl;
}

int main()
{
pedirDatos(); 
mostrarDatos(puntero_persona);
return 0;
}