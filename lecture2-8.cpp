#include <iostream>

using namespace std;

void printArray(int* a, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout << "[" << i << "]" << endl;
    }
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};

    int *p;

    p = &a[4];

    printArray(p,3);

    return 0;
}