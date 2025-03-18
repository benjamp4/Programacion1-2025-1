#include <iostream>
using namespace std;

int main() {
    char letra = 'A';  // Carácter
    char numeroComoChar = 65;  // Carácter basado en su código ASCII para la letra A
    
    letra++;
    
    cout << "Letra: " << letra << endl; // Letra aumentada a uno A->B
    cout << "Carácter con código ASCII 65: " << numeroComoChar << endl;
    
    return 0;
}
