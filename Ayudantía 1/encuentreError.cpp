#include <iostream>
using namespace std;

int main(){
    int A; 
    int B;
    int C = 5; // Usar C mayuscula, para poder operar a lo largo del código
    string D = "Hola Mundo"; // Corregido, es necesario usar las comillas

    A = 8; // Inicializamos el valor A
    B = A; // Le damos el valor de A a B ya que A está inicializado
    C = A + 4;
    
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    cout << "C: " << C<< endl;
    cout << "Saludos! " << D << endl;
    return 0;
}

