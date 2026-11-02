#include <iostream>
using namespace std;

int main() 
{
    int numero;
    do 
    {
        cout << "Ingrese un número (0 para salir): ";
        cin >> numero;
        
        cout << "Número ingresado: " << numero << endl;
    } 
    while (numero != 0);
    
    return 0;
    
}