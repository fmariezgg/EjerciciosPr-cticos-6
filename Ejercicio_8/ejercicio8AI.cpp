#include <iostream>
using namespace std;

int main() {
    int vector1[3], vector2[3];
    int puntoProduct = 0;

    cout << "Ingresa los elementos del primer vector: ";
    for (int i = 0; i < 3; i++) {
        cin >> vector1[i];
    }

    cout << "Ingresa los elementos del segundo vector:  ";
    for (int i = 0; i < 3; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < 3; i++) {
        puntoProduct += vector1[i] * vector2[i];
    }

    cout << "El punto de los dos vectores: " <<puntoProduct << endl;

    return 0;
}