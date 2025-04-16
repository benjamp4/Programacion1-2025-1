#include <iostream>
using namespace std;

int calcularPrecioEntrada(int edad) { // la funcion entrada recibe una edad
    if (edad < 5) { // Si la edad es menir a 0
        return 0;
    } else if (edad <= 17) { // Si tiene mas o menos de 17
        return 5;
    } else if (edad <= 59) { // Si tiene mas de 59
        return 10;
    } else {
        return 6; // Etc....
    }
}

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 0) { // verificar edad valida..
        cout << "Edad no válida." << endl;
    } else { // precio va invocar a la funcion que calcula el precio de entrada
        int precio = calcularPrecioEntrada(edad); // Invocar funcion..
        cout << "El precio de su entrada es: $" << precio << "." << endl;
    }

    return 0;
}
