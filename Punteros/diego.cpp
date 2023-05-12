#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    int numero, * p_numero, divisores = 0;
    p_numero = &numero;
    cout << "Ingrese un numero: ";
    cin >> *p_numero;
        for (int i = 1; i <= *p_numero; i++) {//en cada ves q ocurre el ciclo se verifica si es divisible por i, y si si, se incrementa divisores.
            if (*p_numero % i == 0) {
            divisores++;
            }
        }
            if (divisores == 2) {//si tiene 2 divisores, es primo , 1 y el mismo 
            cout << "El numero " << *p_numero << " es primo" << endl;
            cout << "La posicion de memoria es: " << p_numero << endl;
            }
            else {
            cout << "El numero " << *p_numero << " no es primo" << endl;
            cout << "La posicion de memoria es: " << p_numero << endl;
            }
}