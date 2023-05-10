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
}empleados[2]; 

int main()
{

for (int i = 0; i < 2; i++)
{
    // fflush(stdin);
    cout<<"Ingrese el nombre: "<<endl;
    cin.getline(empleados[i].nombre,20,'\n'); 
    cout<<"Ingrese el direccion: "<<endl;
    cin.getline(empleados[i].dir_empleado.direccion,30,'\n'); 
    cout<<"Ingrese el ciudad: "<<endl;
    cin.getline(empleados[i].dir_empleado.ciudad,20,'\n'); 
    cout<<"Ingrese el provincia: "<<endl;
    cin.getline(empleados[i].dir_empleado.provincia,20,'\n'); 
    cout<<"Ingrese el salario: "<<endl;
    cin>>empleados[i].salario; 
    cout<<"\n"; 
    //vaciar el buffer
    cin.clear();
  cin.ignore(); 
}

for (int i = 0; i < 2; i++)
{
    cout<<"Nombre: "<<empleados[i].nombre<<endl;
    cout<<"direccion: "<<empleados[i].dir_empleado.direccion<<endl;
    cout<<"ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
    cout<<"provincia: "<<empleados[i].dir_empleado.provincia<<endl;
    cout<<"salario: "<<empleados[i].salario<<endl;
    cout<<"\n";
}

return 0;
}