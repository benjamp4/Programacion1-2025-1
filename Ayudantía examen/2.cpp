#include <cmath>

int obGrupoSE(int ingresoGrupo, int integrantes) {
    if (integrantes <= 0) return 4; // Protección contra división por cero
    double IFE = ingresoGrupo / pow(integrantes, 0.7);

    if (IFE >= 2600.0) return 1;
    if (IFE >= 1000000.0 && IFE < 2600000.0) return 2;
    if (IFE >= 700.0 && IFE < 1000000.0) return 3;
    return 4;
}


#include <iostream>
using namespace std;

void revisarGrupos(int familias[100][3]) {
    int sumaIngresos = 0;
    int conteoGrupos[4] = {0};
    
    for (int i = 0; i < 100; ++i) {
        int ingreso = familias[i][0];
        int integrantes = familias[i][1];
        int grupo = obGrupoSE(ingreso, integrantes);
        familias[i][2] = grupo;
        sumaIngresos += ingreso;
        conteoGrupos[grupo - 1]++;
    }

    cout << "Sumatoria de ingresos: " << sumaIngresos << endl;
    cout << "Cantidad de familias por grupo socioeconómico:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Grupo " << (i + 1) << ": " << conteoGrupos[i]
             << " familias (" << (conteoGrupos[i] * 100 / 100) << "%)" << endl;
    }
}



