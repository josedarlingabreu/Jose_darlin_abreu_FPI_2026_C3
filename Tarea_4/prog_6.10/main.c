#include <stdio.h>

/* Cuadrado Mágico: comprueba si la suma de filas, columnas y diagonales es igual. */

#define MAX 3

int EsCuadradoMagico(int A[][MAX], int N);

void main(void)
{
    int MAT[MAX][MAX] = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    };

    if (EsCuadradoMagico(MAT, 3))
        printf("Es un CUADRADO MAGICO.\n");
    else
        printf("NO es un cuadrado magico.\n");
}

int EsCuadradoMagico(int A[][MAX], int N)
{
    int I, J, SUM_REF = 0, SUM_F, SUM_C;

    for (J = 0; J < N; J++) SUM_REF += A[0][J];

    for (I = 1; I < N; I++)
    {
        SUM_F = 0;
        for (J = 0; J < N; J++) SUM_F += A[I][J];
        if (SUM_F != SUM_REF) return 0;
    }

    for (J = 0; J < N; J++)
    {
        SUM_C = 0;
        for (I = 0; I < N; I++) SUM_C += A[I][J];
        if (SUM_C != SUM_REF) return 0;
    }

    return 1;
}
