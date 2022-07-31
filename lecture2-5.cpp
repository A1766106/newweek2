#include <iostream>

using namespace std;

int main()
{
    int *ptr,i,k ;
    int *ptr2,L ;

    // address of i is assigned to ptr
    ptr = &i;

    // ptr 2 is assigned address of next int after i
    ptr2 = ptr - 1;

    // L is the number of ints between ptr and ptr2
    L = ptr2 - ptr;

    cout << "Value of i       " << *ptr << endl;
    cout << "Value of ptr?    " << *(ptr-1) << endl; 
    cout << "Value of ptr     " << (unsigned long) ptr << endl;
    cout << "Value of ptr 2   " << (unsigned long) ptr2 << endl;
    cout << "Value of L       " << L << endl;

    return 0;
}