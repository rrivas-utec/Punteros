#include <iostream>
using namespace std;

int main()
{
    // Inicializando el puntero para que apunte a CERO
    int* ptrMonton = nullptr;
    
    // Asignando espacio de memoria a un puntero
    ptrMonton = new int;
    
    // Asignando valor al espacio de memoria a traves de la dereferencia
    *ptrMonton = 20;
    
    // Imprimiendo el valor
    cout << *ptrMonton;
    
    // Liberando el espacio de memoria
    delete ptrMonton;
    return 0;
}