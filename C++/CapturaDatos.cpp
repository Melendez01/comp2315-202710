#include <iostream>
#include <string>

using namespace std;

int main() 
{
    //Declaración de variables
    int entero;
    float flotante;
    char caracter;
    string cadena;

    cout << "Ingrese un numero entero: ";
    cin >> entero;

    cout << "Ingrese un numero flotante: ";
    cin >> flotante;

    cout << "Ingrese un caracter: ";
    cin >> caracter;

    cout << "Ingrese una cadena de caracteres: ";
    getline(cin >> ws, cadena); //ws = white space, ayuda a ignorar los espacios en blanco pendientes, incluyendo el Enter anterior.

    cout << "\nDatos ingresados:" << endl;
    cout << "Entero: " << entero << endl;
    cout << "Flotante: " << flotante << endl;
    cout << "Caracter: " << caracter << endl;
    cout << "Cadena: " << cadena << endl;
    
    return 0;
}