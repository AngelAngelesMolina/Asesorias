#include <iostream>

using namespace std;

bool primo(int *num);

int main() {
	int n, *pun;
	pun = &n;

	cout << "Ingrese un numero: " << endl;
	cin >> n;

	if (primo(pun))	 {
		cout << "El numero es primo" << endl;
	}
	else {
		cout << "El numero no es primo" << endl;
	}

	cout << "Su posicion de memoria es: " << pun << endl;


}

bool primo(int *num) {
	if (*num == 0 || *num == 1 || *num == 4) {
		return false;
	}
	for (int i = 2; i < *num / 2; i++) {
		if (*num % i == 0) return false;
	}
}