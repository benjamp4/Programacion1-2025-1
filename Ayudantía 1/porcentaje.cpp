#include <iostream>
using namespace std;

int main() {
    float total = 300.0;
    float parte1 = 75.0;
    float parte2 = 150.0;

    // Cálculo de proporciones en porcentaje
    float porcentaje1 = (parte1 / total) * 100.0;
    float porcentaje2 = (parte2 / total) * 100.0;

    cout << "Parte 1 representa el " << porcentaje1 << "% del total." << endl;
    cout << "Parte 2 representa el " << porcentaje2 << "% del total." << endl;

    // Cálculo del cambio porcentual entre dos valores

    float valorInicial = 120.0;
    float valorFinal = 180.0;
    float cambioPorcentual = ((valorFinal - valorInicial) / valorInicial) * 100.0; 

    cout << "El valor ha cambiado en un " << cambioPorcentual << "%." << endl;

    return 0;
}
