#include <iostream>
#include <cmath>
using namespace std;

void resolverEcuacionSegundoGrado(double a, double b, double c, double& solucion1, double& solucion2) {
    double discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        cout << "La ecuación no tiene soluciones reales." << endl;
    } else {
        solucion1 = (-b + sqrt(discriminante)) / (2 * a);
        solucion2 = (-b - sqrt(discriminante)) / (2 * a);
    }
}

int main() {
    
    double a, b, c;
    double solucion1, solucion2;

    cout << "Introduce los valores de a, b y c: ";
    cin >> a >> b >> c;

    resolverEcuacionSegundoGrado(a, b, c, solucion1, solucion2);
        cout << "Solución 1 MAIN : " << solucion1 << " ";
        cout << "Solución 2 MAIN : " << solucion2 << " ";
    return 0;
}
