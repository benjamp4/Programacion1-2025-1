#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Declaración del arreglo
    int *ptr = arr;               // Puntero apuntando al inicio del arreglo
    cout << "Recorriendo el arreglo usando punteros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *ptr << " ";  // Accedemos al valor en la posición i usando el puntero
        // como tenemos un puntero del arreglo, tenemos que iterar dentro del puntero
        // si pusieramos solo *ptr estaria imprimiendo al primer valor que apunta ptr (0) del arr
    }
    cout << endl;

    return 0;
}

