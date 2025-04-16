#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de términos para la sucesión de Fibonacci: ";
    cin >> n;

    int a = 0, b = 1, siguiente;

    cout << "Sucesión de Fibonacci: " << endl;

    for (int i = 0; i < n; i++) { // El ciclo estará determinado por el numero ingresado
        if (i == 0) { // (Primer ciclo) Parte de 0 la sucesión, siempre se cumplirá esto y mostrará 0.
            cout << a << " ";
        } else if (i == 1) { // Despues le sigue 1, esto se cumplirá en el otro ciclo.
            cout << b << " ";
        } else { // (Tercer, cuarto, quinto, sexto ciclo... etc.. hasta el infinito si queremos)
            siguiente = a + b; // El siguiente numero es la suma de los dos anteriores
            a = b; // El numero anterior va a ser igual al que le sigue
            b = siguiente; // El numero que le sigue al anterior va a ser igual al siguiente numero
            cout << siguiente << " ";
        }
    }

    cout << endl;

    return 0;
}


// Ejemplo en el tercer ciclo (i = 2)
// siguiente = a + b = 0 + 1... ahora siguiente = 1.
// a = b, es decir, a = 1 (actualizamos a al valor de b).
// b = siguiente, es decir, b = 1 (actualizamos b al valor de siguiente).
// Resultado: En el tercer ciclo, el siguiente número es 1.

// Ejemplo en el cuarto ciclo (i = 3)
// siguiente = a + b = 1 + 1... ahora siguiente = 2.
// a = b, es decir, a = 1 (a toma el valor actual de b).
// b = siguiente, es decir, b = 2 (b toma el valor de siguiente).
// Resultado: En el cuarto ciclo, el siguiente número es 2.

// Ejemplo en el quinto ciclo (i = 4)
// siguiente = a + b = 1 + 2... ahora siguiente = 3.
// a = b, es decir, a = 2 (a se actualiza al valor actual de b).
// b = siguiente, es decir, b = 3 (b toma el valor de siguiente).
// Resultado: En el quinto ciclo, el siguiente número es 3.

