#include <iostream>
using namespace std;

#define MAX 10

float nota[MAX];
float suma = 0, promedio;

int main()
{
    cout << "Proporcione las notas de los 10 estudiantes: " << endl;

    for (int i = 0; i < MAX; i++)//Leer las notas de los estudiantes
    {
        cout << "Ingrese la nota del estudiante  " << i + 1 << ": ";
        cin >> nota[i];
        cout << endl;
    }

    for (int i = 0; i < MAX; i++)//Calcular la suma de las notas
    {
        suma += nota[i];
    }

    promedio = suma/MAX;
    cout << "************************************************" << endl;
    cout << "El promedio general de la seccion es: " << promedio << endl;
    cout << "************************************************" << endl;

    return 0;
}