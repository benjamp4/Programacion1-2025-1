#include <iostream>
using namespace std;

// el paso por valor recibe una copia del valor, por lo cual si modificamos el valor solo se modificará dentro de la función
void pasoPorValor(int a) {
    a = a + 10;
    cout << "Dentro de pasoPorValor, valor de a: " << a << endl; // Aquí se le suma 10, por lo cual debe quedar 15
}

// Paso por referencia: la función recibe una referencia a la variable original
void pasoPorReferencia(int &a) {
    a = a + 10; // Modificamos el valor de 'a' (afecta al valor original)
    cout << "Dentro de pasoPorReferencia, valor de a: " << a << endl;
}

// Paso por puntero: la función recibe la dirección de la variable original
void pasoPorPuntero(int *a) {
    *a = *a + 10; // Modificamos el valor en la dirección apuntada por 'a' (afecta al valor original)
    cout << "Dentro de pasoPorPuntero, valor de a: " << *a << endl;
}

int main() {
    int x = 5;

    cout << "Valor inicial de x: " << x << endl;

    // Ejemplo de paso por valor
    pasoPorValor(x); // Paso por valor a x, le pasamos una copia
    cout << "Después de pasoPorValor, valor de x: " << x << " (no cambia)" << endl; // El valor de x no cambia despues de aplicarle la funcion

    // Ejemplo de paso por referencia
    pasoPorReferencia(x); // Le pasamos una referencia del valor, esto hará que el valor cambie
    cout << "Después de pasoPorReferencia, valor de x: " << x << " (cambia)" << endl; // El valor de x cambió al ser un paso por referencia

    // Ejemplo de paso por puntero
    pasoPorPuntero(&x); // Pasamos por referencia el valor de x, accediendo a su espacio de memoria
    cout << "Después de pasoPorPuntero, valor de x: " << x << " (cambia)" << endl;

    return 0;
}


