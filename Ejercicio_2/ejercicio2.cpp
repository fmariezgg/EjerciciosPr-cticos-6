#include<iostream>
using namespace std;

void ciclo(){
    for (int i = 100; i >= 1; i--)
    {
        if(i% 2!= 0)
        {
            cout << i << "\n";
        }
    }
    
}

int main()
{
    cout << "Numeros impares entre 1 y 100" << endl;
    ciclo();
}