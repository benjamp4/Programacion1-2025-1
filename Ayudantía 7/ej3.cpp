#include <iostream>
using namespace std;

int main() {
    int sala[5][6] = {0}; 
    int fila, columna;
    char opcion;
    string pelicula;
    cout << "Bienvenido al cine, ingrese la película que desea ver." << endl;
    getline(cin, pelicula);

    while (true) {
        
        cout << "Estado actual de la sala de cine para la película "<< pelicula <<" (0 = disponible, 1 = ocupado):" << endl;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 6; j++) {
                cout << sala[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Seleccione el asiento que desea reservar:" << endl;
        cout << "Ingrese la fila (0 a 4): ";
        cin >> fila;
        cout << "Ingrese la columna (0 a 5): ";
        cin >> columna;

        if (fila >= 0 && fila < 5 && columna >= 0 && columna < 6) { // Si la fila es mayor a 0 y menor a 5 y la columna mayor a 0 y menor a 6

            if (sala[fila][columna] == 0) { // Si este espacio está disponible
                sala[fila][columna] = 1;  // Marcar el asiento como reservado
                cout << "Asiento reservado exitosamente." << endl;
                
                // se muestra el estado actualizado repasando la sala de cine nueva
                cout << "Estado actualizado de la sala de cine para la película " << pelicula << endl;
                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 6; j++) {
                        cout << sala[i][j] << " ";
                    }
                    cout << endl;
                }
            } else { // Está ocupado
                cout << "El asiento ya está ocupado. Por favor, seleccione otro." << endl;
            }
        } else { // Si no se cumple ninguna de las dos opciones
            cout << "Selección inválida. Por favor, intente nuevamente." << endl;
        }

        // Preguntar al usuario si desea realizar otra reservación
        cout << "¿Desea realizar otra reservación? (s/n): ";
        cin >> opcion;

        // Salir del bucle si el usuario elige 'n' o 'N'
        if (opcion == 'n' || opcion == 'N') {
            break;
        }
    }

    cout << "Gracias por reservar los asientos, ahora toca ver la pelicula " << pelicula << endl;
    return 0;
}