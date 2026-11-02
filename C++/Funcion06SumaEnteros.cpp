#include <iostream>
using namespace std;

// Prototipo de la funcion
int sumaRango(int inicio, int fin);

int main()
{
    // Declaracion de variables
    int inicio, fin, resultado;

    // Solicitar los valores del rango
    cout << "Introduce el numero inicial del rango: ";
    cin >> inicio;

    cout << "Introduce el numero final del rango: ";
    cin >> fin;

    // Llamada a la funcion
    resultado = sumaRango(inicio, fin);

    // Mostrar el resultado
    cout << "La suma de todos los numeros enteros "
         << "en el rango [" << inicio << ", " << fin
         << "] es: " << resultado << endl;

    return 0;
}

// Definicion de la funcion
int sumaRango(int inicio, int fin)
{
    int suma = 0;

    // Ciclo para recorrer los numeros del rango
    for (int i = inicio; i <= fin; i++)
    {
        // Acumular cada numero en la variable suma
        suma = suma + i;

        // Tambien se puede escribir: suma += i;
    }

    // Devolver la suma total
    return suma;
}
