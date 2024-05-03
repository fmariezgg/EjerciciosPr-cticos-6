#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    cout << "La suma de los numeros pares entre 100 y 200 es: ";

    for (int i = 100; i <= 200; i += 2)
    {              // Iniciamos un bucle que empieza en 100 y termina en 200, aumentando de 2 en 2
        suma += i; // se suma el valor actual de i a suma
    }

    cout << suma << endl;

    return 0;
}