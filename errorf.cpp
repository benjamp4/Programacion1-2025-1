#include <iostream>
using namespace std;

int sumar(int a, int b) {
    cout << "La suma es: " << a + b << endl;
}

int main() {
    int x = 3;
    int y = 5;
    int resultado = sumar(x, y); 
    cout << "Resultado guardado: " << resultado << endl;
    return 0;
}

