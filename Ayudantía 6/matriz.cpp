#include <iostream>
using namespace std;

bool verificarEquilibrio(int matriz[2][2]) {

    if (matriz[0][0] == matriz[1][1] && matriz[0][1] == matriz[1][0]) {
        return true;
    }
    return false;
}

int main() {
    int matriz[2][2];

    cout << "Ingrese los valores de los pesos en la plataforma (A, B, C, D):" << endl;

    cout << "A: ";
    cin >> matriz[0][0];
    cout << "B: ";
    cin >> matriz[0][1];
    cout << "C: ";
    cin >> matriz[1][0];
    cout << "D: ";
    cin >> matriz[1][1];

    if (verificarEquilibrio(matriz)) {
        cout << "La plataforma está en equilibrio." << endl;
    } else {
        cout << "La plataforma no está en equilibrio." << endl;
    }

    return 0;
}
