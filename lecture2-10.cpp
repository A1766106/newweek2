#include <iostream>

using namespace std;

int* foo()
{
    // a is allocated in the stack
    int a = 879;
    // p is also allocated in the stack
    int* p = &a;
    // q is allacted in the stack
    // but contains the address from the heap.
    int* q = new int;
    // 124 is now stored in the heap.
    *q = 124;
    return q;
}

int main()
{
    int* k = foo();
    cout << *k << endl;
    // free the memory allocated by new...
    // from the function foo call
    delete k;

    return 0;
}