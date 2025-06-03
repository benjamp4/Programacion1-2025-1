#include <iostream>
using namespace std;

void transponerMatriz(int (&original)[4][4], int (&transpuesta)[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            transpuesta[j][i] = original[i][j];
        }
    }
}

int main() {
    int matriz[4][4];
    int transpuesta[4][4];

    cout << "Ingresa los elementos de la matriz 4x4:\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    transponerMatriz(matriz, transpuesta);

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << transpuesta[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}
