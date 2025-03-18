#include <iostream>
using namespace std;
int main() {
    int a = 123;
    
    // Obtener los dígitos del número usando el operador %
    int ultimoDigito = a % 10;        // Último dígito: 12|3| % 10 = 3
    int digitoMedio = (a / 10) % 10;  // Dígito del medio: (1|2|3 / 10) -> (12), 12 % 10 = 2
    int primerDigito = (a / 100) % 10;  // Primer dígito: (|1|23 / 100) -> (1), 1 % 10 = 1;

    // Imprimir los dígitos concatenados como el número invertido
    cout << ultimoDigito << digitoMedio << primerDigito << endl;

    return 0;
}
