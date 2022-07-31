#include <iostream>

using namespace std;

int main()
{

    int *ptr, i;
    i = 11;

    // address of i is assigned to ptr
    ptr = &i;

    // increment the value of i
    (*ptr)++;

    // show i's value using ptr variable
    cout << "Value of i: " << *ptr << endl;

    return 0;
}