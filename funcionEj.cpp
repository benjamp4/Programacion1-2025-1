#include <iostream>
using namespace std;
 // FUNCION ANTES DEL MAIN!! RECORDAR
 // Esta funcion suma dos números, por lo cual RECIBE dos números, si les pasan una función 
int sumar(int a, int b) { // le pasamos un int A y un int B
    return a + b;
}

int main() {
    int resultado = sumar(3, 5); // Invocamos la funcion, y la igualamos a una variable auxiliar que guarda los numeros
    cout << "La suma es: " << resultado << endl; // Imprimimos la variable auxiliar
    return 0;
}

