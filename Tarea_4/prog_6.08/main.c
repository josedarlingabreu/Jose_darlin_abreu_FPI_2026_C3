#include <stdio.h>

/* Matriz transpuesta cuadrada. */

#define MAX 10

void TranspuestaCuadrada(int A[][MAX], int N);
void Imprime(int A[][MAX], int N);

void main(void)
{
    int MAT[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original:\n");
    Imprime(MAT, 3);

    TranspuestaCuadrada(MAT, 3);

    printf("\nTranspuesta:\n");
    Imprime(MAT, 3);
}

void TranspuestaCuadrada(int A[][MAX], int N)
{
    int I, J, AUX;
    for (I = 0; I < N; I++)
    {
        for (J = I + 1; J < N; J++)
        {
            AUX = A[I][J];
            A[I][J] = A[J][I];
            A[J][I] = AUX;
        }
    }
}

void Imprime(int A[][MAX], int N)
{
    int I, J;
    for (I = 0; I < N; I++)
    {
        for (J = 0; J < N; J++)
            printf("%d\t", A[I][J]);
        printf("\n");
    }
}
