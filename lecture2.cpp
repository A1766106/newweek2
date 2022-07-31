#include <iostream> 

using namespace std;

int g = 100;


void bob()
{
    int c = 8;
    cout << "The address of c = " << &c << endl ;
}

void foo() 
{

    int a = 0;
    int b = 1;
    cout << "The address of a = " << &a << endl ;
    cout << "The address of b = " << &b << endl ;
    g++;
}

int main()
{
    foo();
    bob();

    cout << "The address of g = " << &g << endl ;


    return 0;
}