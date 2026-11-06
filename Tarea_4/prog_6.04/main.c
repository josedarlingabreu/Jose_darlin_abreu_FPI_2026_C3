#include <stdio.h>

/* Simetría de una matriz cuadrada. */

#define MAX 10

int EsSimetrica(int A[][MAX], int N);

void main(void)
{
    int MAT[MAX][MAX] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    if (EsSimetrica(MAT, 3))
        printf("La matriz es SIMETRICA.\n");
    else
        printf("La matriz NO es simetrica.\n");
}

int EsSimetrica(int A[][MAX], int N)
{
    int I, J;
    for (I = 0; I < N; I++)
    {
        for (J = 0; J < N; J++)
        {
            if (A[I][J] != A[J][I])
                return 0;
        }
    }
    return 1;
}
