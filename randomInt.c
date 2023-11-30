#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void randomInteger(int *num);

int main()
{
    int num = 0;
    randomInteger(&num);
    printf("\nnum = %d\n\n", num);
    return 0;
}

void randomInteger(int *num)
{
    srand(time(NULL));
    //random integer from 0 to 99
    *num = rand() % 100;
}
