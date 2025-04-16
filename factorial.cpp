#include <iostream>
using namespace std;

int main() {
    int numero, factorial = 1;
    cout << "Introduce un número:" << endl;
    cin >> numero;
    
    for (int i = 1; i <= numero; i++) { // int i = 1, si i es menor o igual al numero, se le sumará 1 a i

        factorial *= i;  // Factorial es igual a factorial por i, es decir...

        // Si ingresamos 5 por ejemplo, pasará esto
        // ..... PRIMER CICLO .....
        // int i = 1, factorial es 1, entonces factorial = 1 * 1 = 1
        // Ahora 'i' incrementa en 1, por lo que 'i' ahora es 2.
        //
        // ..... SEGUNDO CICLO .....
        // int i = 2, factorial es 1, entonces factorial = 1 * 2 = 2
        // Ahora 'i' incrementa en 1, por lo que 'i' ahora es 3.
        //
        // ..... TERCER CICLO .....
        // int i = 3, factorial es 2, entonces factorial = 2 * 3 = 6
        // Ahora 'i' incrementa en 1, por lo que 'i' ahora es 4.
        //
        // ..... CUARTO CICLO .....
        // int i = 4, factorial es 6, entonces factorial = 6 * 4 = 24
        // Ahora 'i' incrementa en 1, por lo que 'i' ahora es 5.
        //
        // ..... QUINTO CICLO .....
        // int i = 5, factorial es 24, entonces factorial = 24 * 5 = 120
        // El ciclo termina porque 'i' ya no será menor o igual a 5.

    }
    
    cout << "El factorial de " << numero << " es: " << factorial << endl;
    
    return 0;
}
