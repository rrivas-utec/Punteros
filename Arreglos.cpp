#include <iostream>
using namespace std;

int main()
{
    // el nombre de un arreglo es un puntero
    int arr[] = {11, 21, 24, 5, 7};
    
    // Acceso a traves del sub-indice
    cout << arr[0] << "\n";
    
    // Accediendo a elemento 0 y 3 usando aritmetica de punteros
    cout << *(arr + 0) << "\n";
    cout << *(arr + 3) << "\n";
    
    // Verificando que la direccion de arr coincide 
    cout << arr << "\n";
    cout << &arr[0] << "\n";
    
    // NOTA: El siguiente comando no es valido
    //cout << *arr++;
    
    // El comando anterior se puede lograr utilizando un puntero (ptrArr) 
    // en vez del nombre del arreglo
    int* ptrArr = arr;
    cout << *ptrArr++ << "\n";
    cout << *ptrArr++ << "\n";
    cout << *ptrArr++ << "\n";
    cout << *ptrArr++ << "\n";
    cout << *ptrArr++ << "\n";
    
    
    return 0;
}