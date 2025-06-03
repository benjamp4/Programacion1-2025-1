#include <iostream>
using namespace std;

void mostrarSuma(int arreglo[], int tamaño) { // Esta función void recibe un arreglo y un tamaño
    int suma = 0;
    for (int i = 0; i < tamaño; i++) { // Se recorre el tamaño que se recibe 
        suma += arreglo[i]; // La suma va a ser el indice del arreglo
    }
    cout << "La suma de los elementos es: " << suma << endl;
}

int main() {
    // Declaración del arreglo y tamaño explícito
    int numeros[5] = {10, 20, 30, 40, 50}; // Se suman todos
    int tamaño = 5; // Este tamaño va a ser recibido para sumar

    // Llamada a la función
    mostrarSuma(numeros, tamaño); // Se llama a la funcion 

    return 0;
}



