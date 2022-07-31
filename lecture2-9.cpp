#include <iostream>

using namespace std;

void swapAA(int a[], int b[])
{
    int t = a[0] ; a[0] = b[0];
}

void swapAP(int a[], int b[])
{
    int t = *a ; *a = *b ; *b = t;
}

void swapPA(int *a, int *b)
{
    int t = a[0]; a[0] = b[0] ; b[0] = t ;
}

void swapPP(int *a, int *b)
{
    int t = *a ; *a = *b ; *b =t;
}

int main()
{

    int x = 5, y = 2 ;

    cout << "x " << x << ", y " << y << endl;
    swapAA(&x, &y) ;
    cout << "x " << x << ", y " << y << endl;
    swapAP(&x, &y) ;
    cout << "x " << x << ", y " << y << endl;
    swapPA(&x, &y);
    cout << "x " << x << ", y " << y << endl;
    swapPP(&x, &y) ;
    cout << "x " << x << ", y " << y << endl;

    return 0;
}