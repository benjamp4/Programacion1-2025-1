#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = 5;
    int resultado = sumar(x, y);
    cout << "Resultado: " << resultado << endl;
    return 0;
}

int sumar(int a, int b) {
    return a + b;
}

