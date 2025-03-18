#include <iostream>
using namespace std;

int main() {
    float num1 = 20.3;
    float num2 = 132.33; 
    double num3 = 1.7e307;   // Número muy grande

    // Operaciones
    float suma = num1 + num2;
    double resta = num2 - num1;
    float multiplicacion = num1 * num2;
    double division = num3 / num2;

    float multiplicacionFueradeRango = num1 * num3; 

    cout << "Suma con float: " << suma << endl;
    cout << "Resta con double: " << resta << endl;
    cout << "Multiplicación con float: " << multiplicacion << endl;
    cout << "División con double: " << division << endl;
    cout << "Multiplicación fuera de rango: " << multiplicacionFueradeRango << endl;
    
    return 0;
}
