#include <iostream>
#include <sstream> // Necesario para stringstream
using namespace std;

int main() {
    // Conversión de texto a número
    string textoNumero = "123";
    int numero;

    stringstream ss(textoNumero);
    ss >> numero;

    cout << "El texto convertido a numero es: " << numero << endl;
    cout << "Suma de texto convertido: " << numero + 10 << endl;
    // Conversión de número a texto

    int otroNumero = 456;
    string texto;

    stringstream ss2;
    ss2 << otroNumero;
    texto = ss2.str();

    cout << "El texto convertido es: " << texto << endl;
    cout << "Concatenacion: " << texto + textoNumero << endl;

    return 0;
}
