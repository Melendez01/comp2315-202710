#include <iostream>
using namespace std;

// Funcion con parametro por referencia
void cambiarNumero(int &numero)
{
    numero = 20;

    cout << "Dentro de la funcion: " << numero << endl;
}

int main()
{
    // Declaracion de variable
    int num1 = 5;

    cout << "Antes de llamar la funcion: " << num1 << endl;

    // Llamada a la funcion por referencia
    cambiarNumero(num1);

    cout << "Despues de llamar la funcion: " << num1 << endl;

    return 0;
}
