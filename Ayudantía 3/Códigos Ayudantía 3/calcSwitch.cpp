#include <iostream>
using namespace std;
int main(){
    float num1, num2;
    char operador;
    cout << "Ingrese numero 1" << endl;
    cin >> num1;
    cout << "Ingrese operador (+, -, *, /)" << endl;
    cin >> operador;
    cout << "Ingrese numero 2" << endl;
    cin >> num2;

    switch(operador){
        case '+':
        cout << "Resultado es.. " << num1 + num2 << endl;
        break;
        case '-':
        cout << "Resultado es.. " << num1 - num2 << endl;
        break;
        case '*':
        cout << "Resultado es.. " << num1 * num2 << endl;
        break;
        case '/':
        if (num2!=0)
        {
        cout << "Resultado es.. " << num1/num2 << endl;
        }
        else{
            cout << "Resultado invalido." << endl;
            return 0;
        }
        break;

        default:
        cout << "Operacion no valida" << endl;
        return 0;
 
    
    }
}