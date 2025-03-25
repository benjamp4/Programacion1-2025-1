#include <iostream>
#include <cmath> // debe incluir para redondear la nota

using namespace std;

int main() {
    // variables para almacenar el nombre y apellido

    string nombre, apellido;

    // leer el nombre y apellido
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;

    // variables para almacenar las notas
    float control1, control2, control3;
    float solemne1, solemne2, solemne3;

    // ingreso de controles
    cout << "Ingrese la nota del primer control: ";
    cin >> control1;
    cout << "Ingrese la nota del segundo control: ";
    cin >> control2;
    cout << "Ingrese la nota del tercer control: ";
    cin >> control3;

    // ingreso de solemnes
    cout << "Ingrese la nota del primer solemne: ";
    cin >> solemne1;
    cout << "Ingrese la nota del segundo solemne: ";
    cin >> solemne2;
    cout << "Ingrese la nota del tercer solemne: ";
    cin >> solemne3;

    // promedio controles
    float promedioControles = (control1 + control2 + control3) / 3;

    // promedio solemnes
    float promedioSolemnes = (solemne1 + solemne2 + solemne3) / 3;

    // nota final
    float notaFinal = (promedioControles * 0.4) + (promedioSolemnes * 0.6);

    // redondeo final
    notaFinal = round(notaFinal * 10) / 10;

    // mostrar el resultado
    cout << "Estimado " << nombre << " " << apellido << ", su promedio de notas es " << notaFinal << endl;

    return 0;
}
