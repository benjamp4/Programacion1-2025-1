#include <iostream>

using namespace std;

// Función para invertir el contenido de un arreglo
void invertirArreglo(int arr[]) {
    int inicio = 0; // 0, inicio del arreglo
    int fin = 5 - 1; // fin, tamaño del arreglo, 5-1 (4) 0,1,2,3,(4)

    while (inicio < fin) { // Mientras el inicio sea menor al final
        int temp = arr[inicio];    // temporal es igual al inicio del arreglo (0) 
        arr[inicio] = arr[fin];   // inicio es igual al final (intercambia los números)
        arr[fin] = temp; // final es igual al temporal (0)           
    
        inicio++; // movemos al inicio, 0 pasa a 1 por ejemplo
        fin--; // movemos el final, 4 pasa a 3
    }
}

// Función para mostrar el contenido de un arreglo
void mostrarArreglo(int arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Función para encontrar la posición de un número en el arreglo
int encontrarPosicion(int arr[], int numero) {
    for (int i = 0; i < 5; i++) {
        if (arr[i] == numero) {
            return i;  // Devuelve la posición si encuentra el número
        }
    }
    return -1;  // Si no encuentra el número, retorna -1
}

int main() {
    int numeros[5] = {4, 5, 6, 3, 1};

    cout << "Arreglo original: ";
    mostrarArreglo(numeros);

    // Encontrar la posición del número 5 en el arreglo original
    int posicionOriginal = encontrarPosicion(numeros, 5);
    if (posicionOriginal != -1) {
        cout << "La posición del número 5 en el arreglo original es: " << posicionOriginal << endl;
    } else {
        cout << "El número 5 no se encontró en el arreglo original." << endl;
    }

    // Invertir el arreglo
    invertirArreglo(numeros);

    cout << "Arreglo invertido: ";
    mostrarArreglo(numeros);

    // Encontrar la posición del número 5 en el arreglo invertido
    int posicionInvertida = encontrarPosicion(numeros, 5);
    if (posicionInvertida != -1) {
        cout << "La posición del número 5 en el arreglo invertido es: " << posicionInvertida << endl;
    } else {
        cout << "El número 5 no se encontró en el arreglo invertido." << endl;
    }

    return 0;
}
