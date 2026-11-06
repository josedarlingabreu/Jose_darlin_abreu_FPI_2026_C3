#include <stdio.h>

/* Intercambio de filas en una matriz bidimensional. */

#define MAX 10

void IntercambiaFilas(int A[][MAX], int F, int C, int F1, int F2);
void Imprime(int A[][MAX], int F, int C);

void main(void)
{
    int MAT[MAX][MAX] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };

    printf("Matriz Original:\n");
    Imprime(MAT, 3, 3);

    IntercambiaFilas(MAT, 3, 3, 0, 2); /* Intercambia Fila 1 y Fila 3 */

    printf("\nMatriz con Filas 1 y 3 Intercambiadas:\n");
    Imprime(MAT, 3, 3);
}

void IntercambiaFilas(int A[][MAX], int F, int C, int F1, int F2)
{
    int J, AUX;
    for (J = 0; J < C; J++)
    {
        AUX = A[F1][J];
        A[F1][J] = A[F2][J];
        A[F2][J] = AUX;
    }
}

void Imprime(int A[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
            printf("%d ", A[I][J]);
        printf("\n");
    }
}
