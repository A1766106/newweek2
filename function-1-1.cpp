#include <iostream>
#include <stdlib.h>

using namespace std;

int sum_diagonal(int array[4][4])
{

int* sumOfDiagonal;
int sum = 0;
*sumOfDiagonal = sum;

for(int i = 0; i < 4; i++)
{
    *sumOfDiagonal = *(sumOfDiagonal + array[i][i]);
}


return sum;
}

