#include <iostream>
using namespace std;

int main() {
    int dia;

    // Ingrese de numeros del 1 al 7 para dias de la semana
    cout << "Ingresa un número del 1 al 7" << endl;
    cin >> dia;

    // Determinar el nombre del día de la semana
    if (dia == 1) {
        cout << "Lunes" << endl;
    } else if (dia == 2) {
        cout << "Martes" << endl;
    } else if (dia == 3) {
        cout << "Miércoles" << endl;
    } else if (dia == 4) {
        cout << "Jueves" << endl;
    } else if (dia == 5) {
        cout << "Viernes" << endl;
    } else if (dia == 6) {
        cout << "Sábado" << endl;
    } else if (dia == 7) {
        cout << "Domingo" << endl;
    } else {
        cout << "Número inválido. Debe ser entre 1 y 7." << endl;
    }

    return 0;
}
