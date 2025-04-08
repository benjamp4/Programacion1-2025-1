#include <iostream>
using namespace std;

int main() {
    bool requisitoAsistencia;
    float promedioNotas;

    cout << "¿Cumpliste con el requisito de asistencia? (1 para sí, 0 para no): ";
    cin >> requisitoAsistencia;

    cout << "Ingresa tu promedio de notas: ";
    cin >> promedioNotas;

    // Si se cumple el requisito de asistencia y el promedio es mayor o igual a 5...
    if (requisitoAsistencia && promedioNotas >= 5) {
        cout << "Eximido!! qué felicidad" << endl;
    } else {
        cout << "No estás eximido, a examen..." << endl;
    }

    return 0;
}
