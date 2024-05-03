#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int suma = 0;
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: ";
    for (int i = 1; i <= 100; i++)
    {
        suma += pow(i,2);
    }
    cout << suma << endl;

    return 0;

}