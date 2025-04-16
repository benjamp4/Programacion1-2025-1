#include <iostream>
using namespace std;
// Funcion contar digitos, tiene que recibir n, un contador en 0 y un while.
// El while tiene que tener una condicion para ir contando los digitos
// Despues se debe retornar el contador.

int contarDigitos(int n) { // Recibe un int n 
    int contador = 0;// Inicia el contador en 0

    while (n != 0) { // Mientras n sea distinto de 0
        contador++;
        n = n/10; // Corremos una coma al numero
    }

    return contador; // Y retornamos el contador
}

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero; // Ingrese el numero

    if (numero <= 0) { // Numero positivo para evitar conflictos.
        cout << "Por favor, ingrese un número entero positivo." << endl; // Si es menor que 0, ingrese un positivo
    } else { // Invocar funcion.
        int digitos = contarDigitos(numero); // Digitos invoca la funcion contar numeros.
        cout << "El número tiene " << digitos << " dígitos." << endl;
    }

    return 0;
}
