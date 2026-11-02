
#include <iostream>
#include <cmath> // Libreria para funciones matematicas
using namespace std;

// Declaracion de constante global
const double PI = 3.14;

// Prototipo de la funcion
double calcularAreaCirculo(double radio);

int main()
{
    double radio;

    // Solicitar el radio del circulo
    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    // Validar que el radio no sea negativo
    if (radio < 0)
    {
        cout << "El radio ingresado no es valido. "
             << "Por favor, introduce un valor no negativo."
             << endl;
    }
    else
    {
        // Llamada a la funcion
        double area = calcularAreaCirculo(radio);

        // Mostrar el resultado
        cout << "El area del circulo con radio "
             << radio << " es: " << area << endl;
    }

    return 0;
}

// Definicion de la funcion
double calcularAreaCirculo(double radio)
{
    // Formula: Area = PI * radio al cuadrado
    return PI * pow(radio, 2);
}
