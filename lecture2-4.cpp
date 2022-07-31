#include <iostream>

using namespace std;

int main()
{
    //int *ptr, a[3]= {43,477,34};

    int a[3] = {43, 477,34};
    int *ptr;
    ptr = &(*(a+1));

    // prints *ptr = 477
    cout << "*ptr = " << *ptr << endl;

    // prints a[2] = 34
    cout << "a[2] = " << *(a+2) << endl;
    
    // prints a[2] = 34
    cout << "a[2] = " << a[2] << endl;


    // address of a[0] is assigned to ptr
    // ptr = &a[0];

    // cout << "Value of a[0] " << *ptr << endl;
    // cout << "Value of a[1] " << *(ptr-1) << endl;
    // cout << "Value of a[2] " << *(ptr-2) << endl;

    

    return 0;
}