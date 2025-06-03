#include <iostream>
using namespace std;

int main() {
    int arreglo[10]; // ARREGLO DE 10

    for (int i = 0; i < 10; i++) { // Con un ciclo recorremos desde 0 todos los espacios del arreglo
        cout << "Ingresa un número para la posición " << i << ": ";
        cin >> arreglo[i]; // Ingresamos un dato por cada índice del arreglo
    }

    cout << "Contenido del arreglo: ";
    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << " ";
    }

    return 0;
}

