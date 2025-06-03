#include <iostream>
using namespace std;

int main() {
    // Definimos un arreglo 2D de 3 filas y 4 columnas
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Recorremos solo las filas
    for (int i = 0; i < 3; i++) {
        cout << "Procesando la fila " << i + 1 << endl;
        
        // Opcional: si quieres ver el contenido de cada fila
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}