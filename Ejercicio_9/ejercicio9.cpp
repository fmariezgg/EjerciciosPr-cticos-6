#include <iostream>

using namespace std;

int main()
{
    // Declaramos las matrices
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizResultado[3][3];

    // Ingresando datos para la matriz A
    cout << "Ingrese los elementos de la matriz A" << endl;
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << "Para la fila " << fila + 1 << " y la columna " << columna + 1 << ": ";
            cin >> matrizA[fila][columna];
        }
        cout << endl;
    }
    cout << endl;

    // Ingresando datos para la matriz B
    cout << "Ingrese los elementos de la matriz B..." << endl;
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << "Para la fila " << fila + 1 << " y la columna " << columna + 1 << ": ";
            cin >> matrizB[fila][columna];
        }
        cout << endl;
    }
    cout << endl;

    // Mostrando la matriz A
    cout << "Matriz A..." << endl;
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << matrizA[fila][columna] << "\t";
        }
        cout << endl << endl;
    }

    // Mostrando la matriz B
    cout << "Matriz B..." << endl;
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << matrizB[fila][columna] << "\t";
        }
        cout << endl << endl;
    }

    // Realizando la multiplicación de matrices
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            matrizResultado[fila][columna] = (matrizA[fila][columna]) * (matrizB[fila][columna]);
        }
    }

    // Mostrando el resultado de la multiplicación
    cout << endl << "Matriz Resultado de la Multiplicación..." << endl;
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << matrizResultado[fila][columna] << "\t";
        }
        cout << endl << endl;
    }
}
