int resultado(int matriz[30][30], int fila, int columna) {
    if (matriz[fila][columna] == 1)
        return -1;

    int conteo = 0;
    for (int i = fila - 1; i <= fila + 1; ++i) {
        for (int j = columna - 1; j <= columna + 1; ++j) {
            if (i >= 0 && i < 30 && j >= 0 && j < 30 && !(i == fila && j == columna))
                if (matriz[i][j] == 1)
                    conteo++;
        }
    }
    return conteo;
}

#include <iostream>
using namespace std;

void muestraTablero(int matriz[30][30]) {
    int totalBombas = 0;
    for (int i = 0; i < 30; ++i) {
        for (int j = 0; j < 30; ++j) {
            if (matriz[i][j] == 1) {
                cout << "* ";
                totalBombas++;
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
    cout << "Total de bombas en el tablero: " << totalBombas << endl;
}

