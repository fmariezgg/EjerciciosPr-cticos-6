#include<iostream>
using namespace std;

//Funcion para calcular la suma de los numeros
int ciclo(int n, int total_suma, int x, int cantidad)
{
    while ( x<=cantidad)
    {
        cout << "Ingrese el numero " << x << ": ";
        cin >> n;
        total_suma = total_suma + n;
        x++;
    }

    return total_suma;

}

int main()
{
    int total_suma = 0;//inicializamos en 0
    int n, x = 1;//inicializamos x en 1
    int cantidad;

    cout << "Dime cuantos numeros quieres sumar: ";
    cin >> cantidad;  

    int miciclo = ciclo(n,total_suma, x, cantidad);
    cout << "El total de la suma es: " << miciclo;

    return 0;
}