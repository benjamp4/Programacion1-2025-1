#include <iostream>
using namespace std;

int main() {
    int contador = 10;
    
    // Incremento y decremento
    contador++;  // Esto es lo mismo que decir, contador = contador + 1 (contador = 11)
    contador--;  // Esto es lo mismo que decir, contador = contador - 1 (contador = 10)
    
    // Operaciones compuestas

    contador += 5;  // Esto es lo mismo que decir, contador = contador + 5 (contador = 15)
    contador -= 3;  // Esto es lo mismo que decir, contador = contador - 3 (contador = 12)
    
    cout << "Valor final de contador: " << contador << endl;
    
    return 0;
}
