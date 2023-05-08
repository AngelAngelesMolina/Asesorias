#include <iostream>
using namespace std;
// struct Persona{
//     char nombre[20]; 
//     int edad;
// }
// persona1={"Angel",22},
// persona2={"Roman",27};
struct Persona{
    char nombre[20]; 
    int edad;
}p1,p2;

int main()
{
// cout<<"Nombre de la persona1: "<<persona1.nombre<<endl;
// cout<<"Edad de la persona1: "<<persona1.edad<<endl;
// cout<<"Nombre de la persona2: "<<persona2.nombre<<endl;
// cout<<"Edad de la persona2: "<<persona2.edad<<endl;

cout<<"Nombre:";
cin.getline(p1.nombre,20,'\n');
cout<<"Edad:";
cin>>p1.edad;
//imprimir datos
cout<<p1.nombre<<" y tiene "<<p1.edad<<" años"<<endl;

return 0;
}