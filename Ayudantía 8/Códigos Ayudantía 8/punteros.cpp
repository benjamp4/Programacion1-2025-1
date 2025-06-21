#include <iostream>
using namespace std;
 int main(){
 int aux = 20; // Tenemos que aux es 20 
 int* p_var = &aux; // Aqui tenemos un puntero, que recibe por un paso por referencia el valor de aux.
 // Aquí tenemos un aux2 que será la suma del puntero de p_var
 int aux2 = *p_var + 30;
 cout << aux2;
 }

