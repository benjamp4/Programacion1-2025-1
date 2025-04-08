#include <iostream>
using namespace std;

int main(){
    
    int edad;
    bool esMayor = (edad>=18); // Se le asigna un valor al bool, este caso "true"

    cout << "Ingrese su edad." << endl;
    cin >> edad;

    if(esMayor == true ){ // O en su defecto se puede ocupar solo if(esMayor)
        cout << "Usted es un adulto..." << endl;
    }
        else{
            cout << "Usted es menor edad" << endl;
        }
           return 0;
    }
 


