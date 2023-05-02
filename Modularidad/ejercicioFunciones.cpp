#include <iostream>
#include <stdlib.h>
#include <conio.h>
//Declaracion de funcion 
int sum(int, int); 
void parImpar(int); 
void acum(); 

using namespace std;

int main() {
    int n1, n2, suma, resta, multiplicacion, division;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    suma = sum(n1,n2);
    cout << "El resultado de la suma es: " << suma << endl;
    parImpar(n1); 
    acum(); 
 getch(); 
 return 0; 
}

int sum(int numero1, int numero2){
    return numero1+numero2; 
}
void acum(){
    int i=1; 
    cout<<"acum="<<++i<<endl; //imprime 2
    cout<<"acum="<<i++<<endl; //imprime 2
    cout<<"acum="<<i++<<endl; //imprime 3 pero en la siguiente ves que se llama imprime 4
    
}
void parImpar(int num1){
    if (num1 % 2 ==0 ){
        cout<<"El numero: "<<num1<<" es par"<<endl; 
    } else{
        cout<<"El numero: "<<num1<<" no es par"<<endl; 
    }
}
    