#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define N 15

void randomInteger(int *num);
int *initVector();
void fillVector(int *vector);
bool searchInVector(int *vector, int *num, int pos);
void printVector(int *vector);

int main()
{
    int *vector;
    vector = initVector();
    fillVector(vector);
    printVector(vector);
    return 0;
}

void randomInteger(int *num)
{
    srand(time(NULL));
    //random integer from 0 to 99
    *num = rand() % 100;
}

int *initVector()
{
    int *vector = (int *)calloc(N, sizeof(int));
    if(vector == NULL)
    {
        printf("\nNo se puede asignar memoria.\n\n");
        exit(1);
    }
    return vector;
}

bool searchInVector(int *vector, int *num, int pos)
{
    for(register int j = 0; j < pos; j++)
        if(vector[j] == *num)
            return true;
    return false;
}

void fillVector(int *vector)
{
    int num = 0;
    for(register int i = 0; i < N; i++)
    {
        do
        {
            randomInteger(&num);
            if(i == 0)
                break;
        } while(searchInVector(vector, &num, i));
        vector[i] = num;
    }
}

void printVector(int *vector)
{
    printf("\n\n");
    for(register int i = 0; i < N; i++)
        printf("\t%d,", vector[i]);
    printf("\n\n");
}
