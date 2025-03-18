#include <iostream>
#include <cmath> // Para redondear
using namespace std;

int main() {
    float x = 5.7;
    int y = static_cast<int>(x);  // Conversión de float a int (truncamiento)

    cout << "Valor original de x: " << x << endl;
    cout << "Valor truncado de x a int: " << y << endl;
    
    // Redondeo
    int redondeado = round(x);
    cout << "Valor redondeado de x: " << redondeado << endl;
    
    return 0;
}
