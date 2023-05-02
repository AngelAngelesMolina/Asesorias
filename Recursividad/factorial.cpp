#include <iostream>
long double factorial(int n)
{
    // caso base: si `n` es 0 o 1
    if (n < 1) {
        return 1;
    }
 
    // usa la relación de recurrencia
    return n * factorial(n - 1);
}
using namespace std;

int main()
{
int n;
    cout << "Introduzca numero: ";
    cin >> n;
    cout << "factorial: " << factorial(n) << endl;
return 0;
}