#include <iostream>
using namespace std;

int main() {
    int edad;
    bool esEstreno; // ESTO ES UN VALOR BOOL -> 0 Y 1, FALSE Y TRUE, TRUE = 1 FALSE = 0
    float precioBase;
    float precioTotal;

    // se solicita la edad
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // es estreno?
    cout << "¿Es un estreno? (1 para sí, 0 para no): ";
    cin >> esEstreno;

    // si la edad es menor a 12 o mayor a 65...
    if (edad < 12 || edad > 65) {
        precioBase = 2700;  // 
    } else {
        precioBase = 4000; // Precio para 12-64 años
    }

    // Calcular el precio total considerando el recargo si es un estreno
    if (esEstreno==true) {
        precioTotal = precioBase + 1500; // Añadir recargo de 3 dólares
    } else {
        precioTotal = precioBase; // Sin recargo
    }

    // Mostrar el precio total
    cout << "El precio total de la entrada es: " << precioTotal << " pesos" << endl;

    return 0;
}
