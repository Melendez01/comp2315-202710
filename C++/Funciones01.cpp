#include <iostream>
using namespace std;

// Definicion de la funcion suma
int suma(int a, int b)
{
    return a + b;
}

int main()
{
    // Llamada a la funcion utilizando valores directos
    int resultado = suma(5, 2);

    cout << "La suma de 5 y 2 es: " << resultado << endl;

    return 0;
}
