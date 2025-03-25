#include <iostream>
using namespace std;
double aplicarDescuento(double precioOriginal, double porcentajeDescuento) {
    double descuento = precioOriginal * (porcentajeDescuento / 100);
    return precioOriginal - descuento;
}

int main() {
    double precio, porcentaje;
    // Solicitar el precio original y el porcentaje de descuento
    cout << "Ingresa el precio original: ";
    cin >> precio;
    cout << "Ingresa el porcentaje de descuento: ";
    cin >> porcentaje;

    // Calcular el precio con el descuento aplicado
    double precioConDescuento = aplicarDescuento(precio, porcentaje);

    // Mostrar el precio con el descuento
    cout << "El precio con el descuento aplicado es: " << precioConDescuento << endl;

    return 0;
}
