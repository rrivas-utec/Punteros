#include <iostream>
using namespace std;

void swap1(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int* ptrA, int* ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}


int main()
{
    
    int x = 3;
    int y = 7;
    swap2(&x, &y);
    cout << "x=" << x << " y=" << y;
    return 0;
}