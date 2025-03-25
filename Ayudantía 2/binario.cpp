#include <iostream>
#include <cmath> 
using namespace std;

// Transformación de un número binario de 3 cifras a decimal.
int main()
{
    double primero, segundo, tercero, primeroD, segundoD, terceroD; 
    // EJEMPLO
    cout << "Ingrese primer digito" << endl; // 1
    cin >> primero;
    cout << "Ingrese segundo digito" << endl; // 0
    cin >> segundo;
    cout << "Ingrese tercer digito" << endl; // 1
    cin >> tercero;

    primeroD = pow(2, 2) * primero; // 1 * 2*2
    segundoD = pow(2, 1) * segundo; // 0 * 2
    terceroD = pow(2, 0) * tercero; // 1 * 1
    // 4 + 0 + 1
    cout << "Su numero binario transformado a decimal es: " << primeroD + segundoD + terceroD << endl;

    return 0;
}

