#include <iostream> 
using namespace std;

int areaRectangulo(int base, int altura){
    return base * altura;
}

int main(){


int base, altura;
cout << "Ingrese la base del rectangulo." << endl;
cin >> base;
cout << "Ingrese la altura del rectangulo." << endl;
cin >> altura;

int area = areaRectangulo(base, altura);

cout << "El area del rectangulo es: " << area << endl;

}