#include <stdio.h>

/* Suma de elementos por fila y por columna en una matriz. */

#define MAX 10

void SumaFilasColumnas(int A[][MAX], int F, int C);

void main(void)
{
    int MAT[MAX][MAX] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    SumaFilasColumnas(MAT, 3, 2);
}

void SumaFilasColumnas(int A[][MAX], int F, int C)
{
    int I, J, SUM;

    /* Suma por filas */
    for (I = 0; I < F; I++)
    {
        SUM = 0;
        for (J = 0; J < C; J++)
            SUM += A[I][J];
        printf("Suma Fila %d: %d\n", I + 1, SUM);
    }

    /* Suma por columnas */
    for (J = 0; J < C; J++)
    {
        SUM = 0;
        for (I = 0; I < F; I++)
            SUM += A[I][J];
        printf("Suma Columna %d: %d\n", J + 1, SUM);
    }
}
