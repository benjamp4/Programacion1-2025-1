#include <iostream> 
using namespace std;
int main(){

int pago = 0;
cout << "ingrese pago" << endl;
cin >> pago;

cout << "Pago en 5000 " << pago/5000 << endl;
cout <<"Pago resto " << pago%5000 << endl;
}