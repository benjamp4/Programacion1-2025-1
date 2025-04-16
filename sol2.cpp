#include <iostream>
using namespace std;

int main() {

    int precio_anticucho, precio_empanada, precio_choripan;
    
    cout << "Ingrese el precio anticucho: " << endl;
    cin >> precio_anticucho;
    cout << "Ingrese el precio empanada: " << endl;
    cin >> precio_empanada;
    cout << "Ingrese el precio choripán: " << endl;
    cin >> precio_choripan;

    int total_ventas = 0;
    int sumatoria_ventas = 0.0;
    int cantidad_anticuchos = 0, cantidad_empanadas = 0, cantidad_choripanes = 0;

    // Ciclo para ingresar las ventas
    while (true) {
        int codigo_producto, cantidad;
        
        cout << "Ingrese código producto: " << endl;
        cin >> codigo_producto;
        
        // Salir del ciclo si se selecciona un numero distinto a 1,2,3
        if (codigo_producto != 1 && codigo_producto != 2 && codigo_producto != 3) {
            break;
        }

        // Solicitar cantidad del producto vendido
        cout << "Ingrese la cantidad vendida: " << endl;
        cin >> cantidad;

        // if else para determinar el producto
        if (codigo_producto == 1) { // Anticucho
            cantidad_anticuchos += cantidad;
            sumatoria_ventas += cantidad * precio_anticucho;
        } 
        else if (codigo_producto == 2) { // Empanada
            cantidad_empanadas += cantidad;
            sumatoria_ventas += cantidad * precio_empanada;
        } 
        else if (codigo_producto == 3) { // Choripán
            cantidad_choripanes += cantidad;
            sumatoria_ventas += cantidad * precio_choripan;
        }

        total_ventas = total_ventas + cantidad;
    }

    // Calcular el promedio de ventas
    int promedio_ventas = 0;
    if (total_ventas > 0) { 
        promedio_ventas = sumatoria_ventas / total_ventas;
    }

    // Determinar el producto con más ingresos
    int ingresos_anticucho = cantidad_anticuchos * precio_anticucho;
    int ingresos_empanada = cantidad_empanadas * precio_empanada;
    int ingresos_choripan = cantidad_choripanes * precio_choripan;

    string producto_mas_ingresos;
    if (ingresos_anticucho >= ingresos_empanada && ingresos_anticucho >= ingresos_choripan) {
        producto_mas_ingresos = "Anticucho";
    } 
    else if (ingresos_empanada >= ingresos_anticucho && ingresos_empanada >= ingresos_choripan) {
        producto_mas_ingresos = "Empanada";
    } 
    else {
        producto_mas_ingresos = "Choripán";
    }

    // Imprimir los resultados
    cout << "Cantidad total de ventas: " << total_ventas << endl;
    cout << "Sumatoria total de ventas: $" << sumatoria_ventas << endl;
    cout << "Promedio de ventas: $" << promedio_ventas << endl;
    cout << "El producto que más ingresos generó fue: " << producto_mas_ingresos << endl;

    return 0;
}
