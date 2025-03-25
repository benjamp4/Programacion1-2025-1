#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    // Coordenadas del primer punto (x1, y1)
    double x1, y1;
    cout << "Ingrese las coordenadas del primer punto (x1 y1): ";
    cin >> x1 >> y1;

    // Coordenadas del segundo punto (x2, y2)
    double x2, y2;
    cout << "Ingrese las coordenadas del segundo punto (x2 y2): ";
    cin >> x2 >> y2;

    // Calcula las diferencias en las coordenadas
    double dx = x2 - x1;
    double dy = y2 - y1;

    // Calculo usando la formula del ejercicio
    double distancia = sqrt(pow(dx, 2) + pow(dy, 2));

    cout << "La distancia entre los dos puntos es: " << distancia << endl;

    return 0;
}