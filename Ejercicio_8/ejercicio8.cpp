#include <iostream>
using namespace std;
#define MAX 10

int main() {
    int longitud = 0; 
    int arreglo1[MAX]; 
    int arreglo2[MAX]; 
    int producto_punto = 0; // Variable para almacenar el producto punto

    cout << "Ingresa la longitud de los vectores (maximo 10): ";
    cin >> longitud; 

    if (longitud <= MAX && longitud > 0) { // Verificamos si la longitud es válida
        cout << endl << "Ingrese los datos para el primer vector" << endl << endl;
        for (int i = 0; i < longitud; i++) { // Ciclo para ingresar datos al primer vector
            cout << "Posicion [" << i + 1 << "]: ";
            cin >> arreglo1[i];
        }

        cout << endl << "Ingrese los datos para el segundo vector" << endl << endl;
        for (int i = 0; i < longitud; i++) { // Ciclo para ingresar datos al segundo vector
            cout << "Posicion [" << i + 1 << "]: ";
            cin >> arreglo2[i];
        }

        // Calcular el producto punto
        for (int i = 0; i < longitud; i++) {
            producto_punto += arreglo1[i] * arreglo2[i];
        }

        // Mostrar el resultado del producto punto
        cout << endl << "El producto punto de los vectores es: " << producto_punto << endl;
    }
    else if (longitud <= 0) { // Si la longitud es menor o igual a 0
        cout << "La longitud no puede ser 0. Intentalo nuevamente." << endl << endl;
        main(); // Llamamos a main para que el usuario lo intente de nuevo
    }
    else { // Si la longitud es mayor que la máxima permitida
        cout << "La longitud máxima es 10. Intentalo nuevamente." << endl << endl;
        main(); // Llamamos a main para que el usuario lo intente de nuevo
    }

    return 0; 
}