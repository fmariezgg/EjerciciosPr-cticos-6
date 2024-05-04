#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingresa el valor de n: ";
    cin >> n;

    int suma = n * (n + 1) / 2;
    cout << "La suma de los numeros desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}