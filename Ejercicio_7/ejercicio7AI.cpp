#include <iostream>
using namespace std;

int main() {
    int longitud;

    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int vector1[longitud], vector2[longitud], suma[longitud];

    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < longitud; i++) {
        suma[i] = vector1[i] + vector2[i];
    }

    cout << "La suma de los vectores es:" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << suma[i] << " ";
    }

    return 0;
}