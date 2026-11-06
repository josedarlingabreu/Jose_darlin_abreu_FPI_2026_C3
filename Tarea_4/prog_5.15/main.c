#include <stdio.h>

/* Modificar matriz: multiplica por una constante y transpone la matriz. */

#define MAX 10

void Transpuesta(int A[][MAX], int B[][MAX], int F, int C);
void Imprime(int A[][MAX], int F, int C);

void main(void)
{
    int MAT[MAX][MAX] = {{1, 2, 3}, {4, 5, 6}};
    int TRANS[MAX][MAX];

    printf("Matriz Original (2x3):\n");
    Imprime(MAT, 2, 3);

    Transpuesta(MAT, TRANS, 2, 3);

    printf("\nMatriz Transpuesta (3x2):\n");
    Imprime(TRANS, 3, 2);
}

void Transpuesta(int A[][MAX], int B[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            B[J][I] = A[I][J];
}

void Imprime(int A[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
            printf("%d\t", A[I][J]);
        printf("\n");
    }
}
