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

    if(operador=='+'){
        cout << "Resultado: " << num1 + num2 << endl;
    }
    else if(operador=='-'){
        cout << "Resultado: " << num1 - num2 << endl;
    }
    else if(operador=='*'){
        cout << "Resultado: " << num1 * num2 << endl;
    }
    else if(operador=='/'){
        if(num2 != 0){
            cout << "Resultado: " << num1 / num2 << endl;
        }
        else{
            cout << "No se puede dividir por 0" << endl;
        }
    }
    else{
        cout << "Operador no valido" << endl;
    }
    return 0;
}


  
