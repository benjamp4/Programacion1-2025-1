#include <iostream>
using namespace std;

int main() {
    int num1 = 20;
    long num2 = 100000; //Numero largo
    long num3 = 10000000000000000; //Numero muy largo que excede el rango de los int
    
    int suma = num1 + num2;
    long resta = num2 - num1;
    int multiplicacion = num1 * num2;
    long division = num2 / num1;
    
    int multiplicacionFueradeRango = num1 * num3;

    cout << "Suma con int: " << suma << endl;
    cout << "Resta con long: " << resta << endl;
    cout << "Multiplicación con int: " << multiplicacion << endl;
    cout << "División con long: " << division << endl;
    cout << "Multiplicación fuera de rango: " << multiplicacionFueradeRango << endl;
    
    return 0;
}
