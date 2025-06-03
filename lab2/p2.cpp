#include <iostream>

using namespace std;

// Función que construye la transpuesta
void transponerMatriz(int original[3][2], int transpuesta[2][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            transpuesta[j][i] = original[i][j];
        }
    }
}

int main() {
    int matriz[3][2];
    int transpuesta[2][3];

    cout << "Ingresa los elementos de la matriz 4x2:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Llamar a la función que genera la transpuesta
    transponerMatriz(matriz, transpuesta);

    cout << endl << "Matriz transpuesta (2x4):" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
