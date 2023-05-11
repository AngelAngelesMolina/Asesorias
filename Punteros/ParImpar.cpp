#include <iostream>
using namespace std;

int main()
{
    int numero, *dir_num; 
    cout<<"Introduzca un numero"<<endl; cin>>numero;
    dir_num = &numero;
    if(*dir_num%2==0){ 
        cout<<"Numero "<<*dir_num<<" par"<<endl;
        cout<<"Posicion de memoria: "<<dir_num;
    } else{
         cout<<"Numero "<<*dir_num<<" impar"<<endl;
        cout<<"Posicion de memoria: "<<dir_num<<endl;
    }

    return 0;
}
/*
*var -> contenido de esa pos de memoria 
var -> dir de memoria 
*/