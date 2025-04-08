// EJERCICIO!!!
// Programe un peaje en C++ ya que al ayudante no se le ocurre que más poner de ejercicio...
// Se necesita que se haga una funcion calcular peaje que reciba un int de tipo de vehiculo y bool vacaciones
// Es decir, se va a recibir un tipo 1 2 o 3 de vehiculo y si esta o no de vacaciones (q rico, vacaciones)
// Si el vehiculo es 1 significa que es una moto, si es 2 un auto y si es 3 un camion
// Tambien programe un else si el vehiculo no se reconoce
// Si está de vacaciones los del peaje les gusta cobrar caleta entonces se le suma 1000 (q sorpresa)
// Es decir, el booleano que recibira la funcion si es 1 está de vacaciones y se suma 1000 al peaje.
// Ademas al llamar a la funcion si el peaje es mayor a 3000 debe indicar que se fueron al chancho con los precios.

#include <iostream>
using namespace std;


int calcularPeaje(int tipoVehiculo, bool vacaciones) {
    int peaje;
    
    if (tipoVehiculo == 1) { // Verificacion de tipo vehiculo
        peaje = 500;  // Moto
    } else if (tipoVehiculo == 2) {
        peaje = 1000;  // Auto
    } else if (tipoVehiculo == 3) {
        peaje = 2500;  // Camión
    } else {
        cout << "Tipo de vehículo no reconocido." << endl;
        return 0;  // Si el tipo no es válido
    }

    // Si está de vacaciones, se agregan 1000 CLP al peaje (ay!!!!)
    if (vacaciones == 1) {
        peaje = peaje + 1000;
    }

    return peaje;
}

int main() {
    int tipo;
    bool vacaciones;
    
    cout << "Seleccione el tipo de vehículo: " << endl;
    cout << "1. Moto" << endl;
    cout << "2. Auto" << endl;
    cout << "3. Camión" << endl;
    cout << "Ingrese el número correspondiente: ";
    cin >> tipo;

    // Verificar si está en periodo de vacaciones (1 para sí, 0 para no)
    cout << "¿Está de vacaciones? (1 para sí, 0 para no): ";
    cin >> vacaciones;

    int peaje = calcularPeaje(tipo, vacaciones);  // Llamamos a la función para imprimir despues por pantalla
    
    if(peaje<3000){
    cout << "El peaje que debe pagar es: " << peaje << " chilean pesos!!" << endl;
    }
    else{
        cout << "Txiuuu se pasaron con los precios, el peaje le sale: " << peaje << " chilean pesotes.." << endl;
    }

    return 0;
}
