#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    // Punteros a los dos enteros

    int* ptrA = &a;
    int* ptrB = &b;

    // Imprimir valores iniciales y direcciones de memoria
    cout << "Valor de a: " << *ptrA << ", Dirección de memoria de a: " << ptrA << " " << endl;
    cout << "Valor de b: " << *ptrB << ", Dirección de memoria de b: " << ptrB << " " << endl;

    // Modificar los valores usando los punteros

    *ptrA = *ptrA + 3;  // Sumar 3 a 'a' usando el puntero
    *ptrB = *ptrB * 2;  // Multiplicar 'b' por 2 usando el puntero

    // Imprimir valores modificados y direcciones de memoria
    
    cout << "Nuevo valor de a: " << *ptrA << ", Dirección de memoria de a: " << ptrA << " " << endl;
    cout << "Nuevo valor de b: " << *ptrB << ", Dirección de memoria de b: " << ptrB << " " << endl;

    return 0;
}
