// EJERCICIO!!!
// Haga una funcion que verifica si es multiplo de un num1 de un num2, recuerde añadir que no se pueda dividir por 0.
// Un numero es multiplo de otro si el resto entre su division es 0.

#include <iostream>
using namespace std;

bool esMultiplo(int a, int b) { // Primero declaramos la funcion, que recibe como parametros un a y b
// Dense cuenta que aqui puede ser cualquier valor (Ejemplo, es int a y int b)
// Pero nosotros trabajamos con num1 y num2, los nombres de las variables que reciben los parametros
// pueden ser distintas unas a otras...
    if (b == 0) { // No se puede dividir en 0, arroja false.
        cout << "No se puede dividir por cero." << endl;
        return false;
    }
    if(a%b==0){ // SI ES MULTIPLO!!! retorna true
        return true;
    }
    else{ // No es multiplo, retorna false... 
        return false;
    }
}

int main() {
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    // Pedimos los dos numeros

    bool resultado = esMultiplo(num1, num2); // Esto guardara valores de si o no...

    if (resultado == true) { // Si el resultado es true, es multiplo, si es false, no lo es.
        cout << num1 << " es múltiplo de " << num2 << "." << endl;
    } else if (resultado == false) {
        cout << num1 << " NO es múltiplo de " << num2 << "." << endl;
    }

    return 0;
}
