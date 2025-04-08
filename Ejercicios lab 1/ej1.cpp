// p1 control 1 2024...

// Ejercicio 1: Conversión de Temperatura (Kelvin a Fahrenheit)
// Tu grupo de amigos esta trabajando en un proyecto relacionado con la medición de temperaturas. 
// Sin embargo, ninguno de ellos sabe cómo realizar conversiones entre distintas unidades, por lo que acuden a ti,
// un experto en programación, para que desarrolles una solución en C++.

// El objetivo es crear un programa que permita convertir una temperatura 
// ingresada en grados Kelvin a grados Fahrenheit.
// Es decir, ingresar kelvin, los celsius transformarlo a fahrenheit y mostrar celsius y fahrenheit
// Sabemos que:

// Para obtener grados Celsius desde Kelvin, se resta 273.5.

// Luego, para convertir de Celsius a Fahrenheit se aplica la fórmula:
// Fahrenheit = (Celsius × 9/5) + 32

#include <iostream>
using namespace std;
int main() {
    
  float kelvin,celsius,fare; 
  
  cout << "Ingrese la temperatura en Kelvin: ";
  cin >> kelvin;
  celsius=kelvin-273.5;
  fare = (celsius * (9.0 / 5.0)) + 32;
  cout << celsius <<" gados celsius equivalen a "<< fare<< " grados farenheit";

}



