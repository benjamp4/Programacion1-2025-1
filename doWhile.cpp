#include <iostream>
using namespace std;

int main() {
    int contador = 1; 
    do { // Esto se va a ejecutar sí o sí una vez...
        cout << "El valor del contador es: " << contador << endl;
        contador++; 
    } while (contador <= 5); // Y esta condición limitará al ciclo...

    return 0;
}

