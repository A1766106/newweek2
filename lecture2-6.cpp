#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3};

    int *k;

    k = &a[2];

    cout << *(k-1) << endl;

    return 0;
}