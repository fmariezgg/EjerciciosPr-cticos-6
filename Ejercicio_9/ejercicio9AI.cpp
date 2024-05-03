#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;
    double matriz1[10][10], matriz2[10][10], matriz_resultado[10][10];

    cout << "Ingrese las dimensiones de la primera matriz (filas y columnas): ";
    cin >> filas1 >> columnas1;

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese las dimensiones de la segunda matriz (filas y columnas): ";
    cin >> filas2 >> columnas2;

    if (columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 0;
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            matriz_resultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                matriz_resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "La matriz resultante de la multiplicación es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << matriz_resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}