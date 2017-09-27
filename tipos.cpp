#include <iostream>
using namespace std;

int main()
{
    int numero = 10;
    char caracter = 'C';
    int* ptrNumero = &numero;
    
    cout << sizeof(numero) << "\n";
    cout << sizeof(caracter) << "\n";
    cout << sizeof(double) << "\n";
    
    cout << numero << "\n";         // Valor de la variable numero
    cout << &numero << "\n";        // Direccion de la variable numero
    cout << ptrNumero << "\n";      // Direccion de la variable numero a traves de puntero
    cout << &ptrNumero << "\n";     // Direccion del puntero
    cout << *ptrNumero << "\n";     // Valor de la variable a la que apunta el puntero
    
    return 0;
}