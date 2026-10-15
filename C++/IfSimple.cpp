#include <iostream>
using namespace std;

int main() 
{
    int numero;

    cout << "Introduce un número: ";
    cin >> numero;

    //Estructura de selección simple
    if (numero > 0) 
    {
        cout << "El número es positivo" << endl;
    }

    return 0;
}