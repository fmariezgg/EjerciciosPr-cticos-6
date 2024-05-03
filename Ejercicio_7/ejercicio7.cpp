#include <iostream>
using namespace std;
#define MAX 10

int main() {
    int longitud = 0;
    int arreglo1[MAX];
    int arreglo2[MAX];
    int arreglo3_total[MAX];

    cout << "Ingresa la longitud de los vectores (maximo 10): ";
    cin >> longitud;

    if (longitud <= MAX && longitud > 0) {
        cout << endl << "Ingrese los datos para el primer vector" << endl << endl;
        for (int i = 0; i < longitud; i++) {
            cout << "Posición [" << i + 1 << "]: ";
            cin >> arreglo1[i];
        }

        cout << endl << "Ingrese los datos para el segundo vector" << endl << endl;
        for (int i = 0; i < longitud; i++) {
            cout << "Posición [" << i + 1 << "]: ";
            cin >> arreglo2[i];
        }

        cout << endl << "La suma de los vectores es: " << endl;
        for (int i = 0; i < longitud; i++) {
            arreglo3_total[i] = (arreglo1[i] + arreglo2[i]);
            cout << "Posición [" << i + 1 << "]: " << arreglo3_total[i] << endl;
        }
    }
    else if (longitud <= 0) {
        cout << "La longitud invalida no puede ser 0. Inténtalo nuevamente." << endl << endl;
        main();//LLamamos a main para que el usuario lo intente de nuevo
    }
    else {
        cout << "La longitud maxima es 10. Inténtalo nuevamente." << endl << endl;
        main();
    }

    return 0;
}
