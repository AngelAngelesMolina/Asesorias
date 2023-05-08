#include <iostream>
using namespace std;

struct info_direccion{ 
char direccion[30];
char ciudad[20]; 
char provincia[20];
};

struct empleado{ 
char nombre[20]; 
struct info_direccion dir_empleado;
double salario; 
} empleados[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin); //vaciando buffer.
        cout<<"Introduzca su nombre: "; cin.getline(empleados[i].nombre,20,'\n'); 
        cout<<"Introduza su direccion: "; cin.getline(empleados[i].dir_empleado.direccion,30,'\n'); 
        cout<<"Introduza su ciudad: "; cin.getline(empleados[i].dir_empleado.ciudad,20,'\n'); 
        cout<<"Introduza su provincia: "; cin.getline(empleados[i].dir_empleado.provincia,20,'\n'); 
        cout<<"Introduzca su salario:"; cin>>empleados[i].salario; 
        cout<<"\n"; 
    }
    //Imprimir los datos
    for (int i = 0; i < 2; i++)
    {
        cout<<"Nombre:"<<empleados[i].nombre; 
        cout<<"Direccion:"<<empleados[i].dir_empleado.direccion;
        cout<<"ciudad:"<<empleados[i].dir_empleado.ciudad;
        cout<<"provincia:"<<empleados[i].dir_empleado.provincia;
        cout<<"salario:"<<empleados[i].salario;
    }
    
return 0;
}