#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 7;  // Número a adivinar
    int adivinanza;

    do { // Se cumple el ciclo do while, es decir se entra sí o sí al ciclo independiente de lo que pase
        cout << "adivina el número (entre 1 y 10): ";
        cin >> adivinanza;

        if (adivinanza < numeroSecreto) { // Si la adivinanza es menor al numeroSecreto...
            cout << "muy bajo... intenta de nuevo." << endl;
        } else if (adivinanza > numeroSecreto) { // Si la adivinanza es mayor al numeroSecreto...
            cout << "muy alto... intenta de nuevo." << endl;
        }

    } while (adivinanza != numeroSecreto); // Se va a cumplir el ciclo mientras el usuario no lo adivine

    cout << "bacán!! adivinaste el número" << endl; // Se sale del ciclo si el usuario adivina

    return 0;
}

