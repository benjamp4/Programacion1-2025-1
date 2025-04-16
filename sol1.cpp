#include <iostream>
using namespace std;

int main() {
    int cantidadEmpanadas; // Cantidad de empanadas
    cout << "¿Cuántas empanadas deseas preparar? ";
    cin >> cantidadEmpanadas;

    double carnePorEmpanada = 0.1;   // kg // float o double
    double cebollaPorEmpanada = 0.1; // unidad
    double harinaPorEmpanada = 0.1;  // kg
    int pasasPorEmpanada = 1;        // unidad

    // Total de ingredientes
    double totalCarne = carnePorEmpanada * cantidadEmpanadas;
    double totalCebolla = cebollaPorEmpanada * cantidadEmpanadas;
    double totalHarina = harinaPorEmpanada * cantidadEmpanadas;
    int totalPasas = pasasPorEmpanada * cantidadEmpanadas;

    // Mostrar cantidades necesarias
    cout << endl;
    cout << "Ingredientes necesarios para " << cantidadEmpanadas << " empanadas:" << endl;
    cout << "- Carne: " << totalCarne << " kg" << endl;
    cout << "- Cebolla: " << totalCebolla << " unidades" << endl;
    cout << "- Harina: " << totalHarina << " kg" << endl;
    cout << "- Pasas: " << totalPasas << " unidades" << endl;

    // Solicitar precios
    double precioCarne, precioCebolla, precioHarina, precioPasas;
    cout << endl;
    cout << "Ingresa el precio por kg de carne: $";
    cin >> precioCarne;
    cout << "Ingresa el precio por unidad de cebolla: $";
    cin >> precioCebolla;
    cout << "Ingresa el precio por kg de harina: $";
    cin >> precioHarina;
    cout << "Ingresa el precio por unidad de pasas: $";
    cin >> precioPasas;
    
    // Calcular costo total
    double costoTotal = (totalCarne * precioCarne) + (totalCebolla * precioCebolla) + (totalHarina * precioHarina) + (totalPasas * precioPasas);

    cout << endl;
    cout << "El costo total para preparar " << cantidadEmpanadas << " empanadas es: $" << costoTotal << endl;

    return 0;
}



