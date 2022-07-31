#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int a[3] = {43,477,34};

    ptr = &a[0];

    cout << "Value of a[0] : " << *(ptr+0) << endl;
    cout << "Value of a[1] : " << *(ptr+1) << endl;
    cout << "Value of a[2] : " << *(ptr+2) << endl;

    return 0;

}