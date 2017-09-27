#include <iostream>
using namespace std;

int calcular_suma(int *arreglo, int cantidad){

    int suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += *arreglo++;
    }
    return suma;
}

int main()
{
    // Accediendo a espacio de memoria en el MONTON o Heap
    int* arreglo = new int[5];
    
    arreglo[0] = 10;
    arreglo[1] = 20;
    arreglo[2] = 30;
    arreglo[3] = 40;
    arreglo[4] = -1;    // Valor agregado para delimitar el fin con un valor negativo = -1
    
    // Recorriendo usando aritmetica de punteros y el nombre original
    for (int i = 0; i < 4; i++) {
        cout << *(arreglo + i) << "\n";
    }
    
    // Recorriendo usando aritmetica de punteros y un puntero adicional 
    // (EJEMPLO FORZADO usando delimitador)
    int* ptrArr = arreglo;
    while (*ptrArr != -1)
        cout << *ptrArr++ << "\n";
    
    // Calcular la suma de datos
    cout << calcular_suma(arreglo, 4) << "\n";
    
    // Liberando el espacio de memoria usado en el Monton
    delete [] arreglo;

    return 0;
}