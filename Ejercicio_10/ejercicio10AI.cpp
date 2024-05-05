#include <iostream>
using namespace std;

int main()
{
    int filas, columnas;

    // Solicitar al usuario el tamaño de la matriz
    cout << "Ingrese el núumero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    // Declarar la matriz
    int matriz[filas][columnas];

    // Solicitar al usuario los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Imprimir la matriz original
    cout << "Matriz original:" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Calcular la transposición de la matriz
    cout << "Matriz transpuesta:" << endl;
    for (int j = 0; j < columnas; j++)
    {
        for (int i = 0; i < filas; i++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
