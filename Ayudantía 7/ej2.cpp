#include <iostream>
using namespace std;

int main() {
    int tabla[3][3];

    int sumaFilas[3] = {0};
    int sumaColumnas[3] = {0};
    cout << "Ingrese 9 valores enteros para llenar la tabla de 3x3:";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " Valor en posicion [" << i << "][" << j << "]: ";
            cin >> tabla[i][j];

            sumaFilas[i] = sumaFilas[i] + tabla[i][j];
            sumaColumnas[j] = sumaColumnas[j] + tabla[i][j];
        }
    }

    cout << "Tabla ingresada:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tabla[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Suma de cada fila:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << " Fila " << i + 1 << ": " << sumaFilas[i] << endl;
    }

    cout << "Suma de cada columna:" << endl;
    for (int j = 0; j < 3; j++) {
        cout << " Columna " << j + 1 << ": " << sumaColumnas[j] << endl;
    }

    return 0;
}