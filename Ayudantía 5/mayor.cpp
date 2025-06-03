#include <iostream>
using namespace std;

int main() {
    string nombres[5];
    int tiempos[5];

    cout << "Ingrese el nombre y el tiempo en segundos de 5 corredores:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Corredor " << i + 1 << " - Nombre: ";
        cin >> nombres[i];
        cout << "Tiempo en segundos: ";
        cin >> tiempos[i];
    }

    // inicializar el primero y último corredor según el tiempo
    int menorTiempo = tiempos[0];
    int mayorTiempo = tiempos[0];
    string primero = nombres[0];
    string ultimo = nombres[0];

    // determinar el primero y el último
    for (int i = 1; i < 5; i++) { // Empieza de 1 porque ya usamos el indice 0 del arreglo
        if (tiempos[i] < menorTiempo) { // Va viendo el primero dentro del arreglo
            menorTiempo = tiempos[i]; // Cambia el indice por el que tiene menor tiempo
            primero = nombres[i];
        }
        if (tiempos[i] > mayorTiempo) {
            mayorTiempo = tiempos[i];
            ultimo = nombres[i];
        }
    }

    // Mostrar los resultados
    cout << "El ganador de la carrera es: " << primero << " con un tiempo de " << menorTiempo << " segundos." << endl;
    cout << "El ultimo de la carrera es: " << ultimo << " con un tiempo de " << mayorTiempo << " segundos." << endl;

    return 0;
}


