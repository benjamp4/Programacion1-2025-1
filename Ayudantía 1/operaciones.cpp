#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 3;
    int suma = a + b;
    int resta = a - b;
    int division = a / b; // 10 / 3 = 3
    int resto = a % b; // Dividendo - (Cociente * Divisor) -> 10-9 = 1

    a += 5;  // Esto es lo mismo que decir a = a + 5 (15)
    b *= 2;  // Esto es lo mismo que decir b = b * 2 (6)

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "División: " << division << endl;
    cout << "Resto: " << resto << endl;
    cout << "Nuevo valor de a: " << a << endl;
    cout << "Nuevo valor de b: " << b << endl;
    
    return 0;
}