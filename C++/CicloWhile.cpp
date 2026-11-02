#include <iostream>
using namespace std;

int main()
{
    int numero; 
    
    cout << "Introduce un número (0 para terminar): ";
    cin >> numero;

    while (numero != 0) 
    {
        cout << "Has introducido " << numero << endl;

        cout << "Introduce un número (0 para terminar): ";
        cin >> numero;
    }

    return 0;
}

