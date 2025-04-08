// Ejercicio lab 1 2024

// Se le entregan tres números de 7 cifras. Con ellos, debe demostrar sus habilidades realizando lo siguiente:

// Extraiga el 3er dígito (contando desde la derecha) del primer número.

// Extraiga el 5to dígito (contando desde la derecha) del segundo número.

// Extraiga el 2do dígito (contando desde la derecha) del tercer número.

// Luego:

// Sume los tres dígitos obtenidos.

// Calcule el resto (módulo) al dividir esa suma por el primer número ingresado.

// Finalmente, muestre por pantalla:

// Los tres dígitos extraídos.

// La suma de los dígitos.

// El resto de la división de la suma por el primer número.


#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3, dig1, dig2, dig3, suma, resto;

    // Ingresamos 3 numeros de 7 cifras... ejemplo 1234567, 4206969, 7654321
    cout << "Ingrese el primer número de 7 cifras: ";
    cin >> numero1;
    cout << "Ingrese el segundo número de 7 cifras: ";
    cin >> numero2;
    cout << "Ingrese el tercer número de 7 cifras: ";
    cin >> numero3;

    dig1 = (numero1 / 100) % 10;      // 3er dígito del primer número (de derecha a izquierda)
    dig2 = (numero2 / 10000) % 10;    // 5to dígito del segundo número (de derecha a izquierda)
    dig3 = (numero3 / 10) % 10;       // 2do dígito del tercer número (de derecha a izquierda)

    // Sumamos los digitos que se sacaron antes...
    suma = dig1 + dig2 + dig3;

    // El resto de la suma de todos diviendo por el numero 1.
    resto = suma % numero1;

    // Mostrar los resultados
    cout << "El dígito número 3 del primer número es " << dig1 << endl;
    cout << "El dígito número 5 del segundo número es " << dig2 << endl;
    cout << "El dígito número 2 del tercer número es " << dig3 << endl;
    cout << "La suma de estos dígitos es " << suma << endl;
    cout << "El resto de la división de esta suma por el primer número es " << resto << endl;

    return 0;
}
