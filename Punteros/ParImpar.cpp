#include <iostream>
using namespace std;

int main()
{
    int numero, *dir_num; 
    cout<<"Introduzca un numero"<<endl; cin>>numero; //5
    dir_num = &numero;  //0x1828738
    if(*dir_num%2==0){  //*dir_num = 5  -> dir_num = 0x1828738
        cout<<"Numero "<<*dir_num<<" par"<<endl;
        cout<<"Posicion de memoria: "<<dir_num;
    } else{
         cout<<"Numero "<<*dir_num<<" impar"<<endl;
        cout<<"Posicion de memoria: "<<dir_num<<endl;
    }
    return 0;
}
/*
*var -> contenido de esa pos de memoria -> 5
var -> dir de memoria -> 0x1828738
*/