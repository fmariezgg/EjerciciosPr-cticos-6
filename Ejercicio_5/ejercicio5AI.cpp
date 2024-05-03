#include <iostream>
using namespace std;

int main() {
    int notas[8], aprobados = 0, reprobados = 0, suma = 0;
    float promedio;

    cout << "Ingrese las notas de los 8 estudiantes:" << endl;

    for (int i = 0; i < 8; i++) {
        cin >> notas[i];
        suma += notas[i];
        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    promedio = (float)suma / 8;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}