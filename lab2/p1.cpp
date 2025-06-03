#include <iostream>

using namespace std;

int main() {
    int numeros[20];

    cout << "Ingresa los " << 20 << " números:" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << "Número " << i << ": ";
        cin >> numeros[i];
    }

    int sumaPares = 0;
    int sumaImpares = 0;

    for (int i = 0; i < 20; ++i) {
        if (i % 2 == 0) {
            sumaPares += numeros[i]; // posición par: 0, 2, 4...
        } else {
            sumaImpares += numeros[i]; // posición impar: 1, 3, 5...
        }
    }

    cout << "Suma de posiciones pares: " << sumaPares << endl;
    cout << "Suma de posiciones impares: " << sumaImpares << endl;

    if (sumaPares > sumaImpares) {
        cout << "La suma de las posiciones pares es mayor." << endl;
    } else if (sumaImpares > sumaPares) {
        cout << "La suma de las posiciones impares es mayor." << endl;
    } else {
        cout << "Ambas sumas son iguales." << endl;
    }

    return 0;
}
