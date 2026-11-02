#include <iostream>
using namespace std;

// Definicion de la funcion suma
int suma(int a, int b)
{
    return a + b;
}

int main()
{
    // Declaracion de variables
    int num1 = 8, num2 = 9;

    // Llamada a la funcion utilizando variables
    int resultado = suma(num1, num2);

    cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}
