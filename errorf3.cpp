#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int main() {
    int x = 3;
    int resultado = sumar(x); 
    cout << "Resultado: " << resultado << endl;
    return 0;
}

