#include <iostream>
using namespace std;

// Definicion de la funcion areaRectangulo
double areaRectangulo(double base, double altura)
{
    return base * altura;
}

int main()
{
    // Declaracion de variables
    double base = 10.0, altura = 5.0;

    // Llamada a la funcion
    double area = areaRectangulo(base, altura);

    cout << "El area del rectangulo con base " << base
         << " y altura " << altura
         << " es: " << area << endl;

    return 0;
}
