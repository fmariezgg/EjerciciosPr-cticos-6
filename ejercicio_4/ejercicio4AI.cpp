#include <iostream>
using namespace std;

int main() {
    float notas[10]; // Arreglo para almacenar las notas de los 10 estudiantes
    float suma = 0; // Variable para calcular la suma de las notas

    // Ingreso de notas de los estudiantes
    cout << "Ingrese las notas de los 10 estudiantes:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Notas del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i]; // Suma de las notas
    }

    // Cálculo del promedio general
    float promedio = suma / 10;

    // Salida del promedio general
    cout << "El promedio general de la seccion es: " << promedio << endl;

    return 0;
}