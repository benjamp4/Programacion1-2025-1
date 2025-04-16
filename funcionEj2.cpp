#include <iostream>
using namespace std;

// Función que suma dos números
int sumar(int a, int b) { // Estos son los parámetros, con los cuales va a funcionar dentro de este bloque de código las variables 
// Que les pasemos.
    return a + b;
}

int main() {
    int x = 3;
    int y = 5;
    // Puede existir la confusion igual de los valores que les estamos pasando a la funcion como tal...
    // Le pasamos x e y pero al final lo que ocupamos es a y b
    int resultado = sumar(x, y);
    cout << "La suma es: " << resultado << endl;

    return 0;
}
