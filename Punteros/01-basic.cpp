
#include <iostream>
using namespace std;

int main()
{
int num, *dir_num;
num =20;
//agregando la posicion de memoria de la variable
dir_num=&num;
cout<<"Numero:"<<*dir_num<<endl; 
cout<<"Direccion de memoria: "<<dir_num<<endl;
return 0;
}


// Punteros 
// &n = direccion de variable 
// *n = variable que esta almacenada en n

// NOTA: los punteros deben de ser de los mismos tipos de datos