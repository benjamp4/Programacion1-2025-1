#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;
    // Aquí por ejemplo podemos sumar los numeros que queramos y usar 0 para salir del ciclo
    cout << "Introduce números para sumar (0 para terminar): ";
    while (true) {
        cin >> numero; // Ingrese numero...
        if (numero == 0) { // Si el numero ingresado es 0 va a salir del ciclo...
            break; // Break nos servirá para romper el ciclo
        }
        suma += numero; // La suma total de los numeros...
    }
    
    cout << "La suma total es: " << suma << endl;
    
    return 0;
}
