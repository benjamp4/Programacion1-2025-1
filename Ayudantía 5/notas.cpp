#include <iostream>
using namespace std;

int main() {
    float notas[5];  // TENEMOS 5 NOTAS 0,1,2,3,4 
    float ponderado = 0.0;
    float notaExamen, notaFinal;

   cout << "Ingresa las 5 notas" << endl;
    for (int i = 0; i < 5; i++) { // CICLO QUE RECORRE EL ARREGLO, I < 5
        if (i < 2) { // I ES MENOR 2 
            cout << "Solemne " << i + 1 << ": "; // 0 -> 0 + 1 = 1, 
        } else {
            cout << "Control " << i - 1 << ": "; // 2 - 1 = 1, 3 - 1 = 2, 
        }
        cin >> notas[i]; // VAMOS INGRESAR LAS NOTAS EN EL ARREGLO 0,1,2,3,4
    }

    ponderado = (notas[0] + notas[1]) * 0.7 / 2 + (notas[2] + notas[3] + notas[4]) * 0.3 / 3;

    cout << "Promedio ponderado de las notas: " << ponderado << endl;

    if (ponderado >= 5.0) {
        cout << "Wena! Te eximiste, tu nota es: " << ponderado << endl;
    } else {

        cout << "Tienes que dar examen... Ingresa la nota del examen ";
        cin >> notaExamen;

        notaFinal = (ponderado * 0.7) + (notaExamen * 0.3);
        if(notaFinal >= 4.0){
            cout << "Pasaste!! tu nota es igual a: " << notaFinal << endl;
        }
        else{
            cout << "Que triste... te lo echaste, con nota: " << notaFinal << endl;
        }
    
    }

    return 0;
}

