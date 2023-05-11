// Determinar si un numero es primo o no con punteros e indicar posicion 
// de memoria donde se guardo el numero

#include <iostream>
using namespace std;

int main()
{
    int num, *dir_num, contador =0; 
    cout<<"Introduzca un numero"<<endl; cin>>num;
    dir_num = &num;
        for (int  i = 1; i < *dir_num; i++)
        {
            if(*dir_num%i==0){
                contador++; 
            }
        }

    if(contador>2){
    cout<<"Numero "<<*dir_num<<" no es primo"<<endl;
    cout<<"Posicion de memoria: "<<dir_num<<endl;
    } else{
    cout<<"Numero "<<*dir_num<<"  es primo"<<endl;
    cout<<"Posicion de memoria: "<<dir_num<<endl;
    }

    return 0;
}

// Num primo -> se divide entre si mismo y entre uno