#include <iostream>

using namespace std;

int main() 
{
    // // declare variable
    // int i = 50;
    // // declare pointer
    // int *p; 

    // p = &i;
    // cout << "The address stored in p is " << p << endl;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int *ptr, i;
    i = 11;

    // address of i is assigned to ptr
    ptr = &i;

    // Show value of pointer
    cout << "Value of ptr: " << ptr << endl;

    // show i's value using ptr variable
    cout << "The value of i is " << *ptr << endl;

    *ptr = 100;

    cout << "The new value of i is " << i << endl;

    return 0;
}