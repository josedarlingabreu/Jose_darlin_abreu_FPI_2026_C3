#include <stdio.h>

/* Diagonal principal de una matriz cuadrada. */

#define MAX 10

void Diagonal(int A[][MAX], int N);

void main(void)
{
    int MAT[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Elementos de la diagonal principal:\n");
    Diagonal(MAT, 3);
}

void Diagonal(int A[][MAX], int N)
{
    int I;
    for (I = 0; I < N; I++)
    {
        printf("Elemento [%d][%d]: %d\n", I, I, A[I][I]);
    }
}
