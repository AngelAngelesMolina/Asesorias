#include <iostream>
#include <string.h>

using namespace std;

int main()
{
char palabra[] = "Angel"; 
char palabra2[] = {'A','n','g','e','l'};
char nombre[20]; 

cout<<"Introduzca su nombre:"<<endl;
cin.getline(nombre,20,'\n'); 

cout<<nombre<<endl;
cout<<strlen(palabra)<<endl;
return 0;

// Realizar un programa donde ingreses la contrasenia con cadenas de caracteres y verifique las 
// siguientes validaciones 
// 1 - Debe de ser mayor a 7 caracteres
//  2 - debe de estar en mayusculas pero el usuario la puede meter en minusculas (convertirla)
//10 min
}