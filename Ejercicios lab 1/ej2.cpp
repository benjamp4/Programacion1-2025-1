// p2 control 1 2024...

// Usted esta realizando un ejercicio de fisica y para esto necesita resolver un triángulo con la ecuación
// de Pitagoras, pero como usted es un estudiante superior al promedio decide hacer un programa
// que le entregue el valor de la hipotenusa, por lo cual usted solo debe pedir los catetos, 
// debe utilizar las clases vistas en clase.

#include <iostream>
using namespace std;
int main() {
    int c1,c2,c3,c4,hip;
    
    cout << "ingrese cateto 1"<< endl;
    cin>>c1;
    cout << "ingrese cateto 2"<< endl;
    cin>>c2;
    c3=pow(c1, 2);
    c4=pow(c2, 2);
    hip=sqrt(c3+c4);
    cout <<"la hipotenusa es "<< hip<< endl;
}


