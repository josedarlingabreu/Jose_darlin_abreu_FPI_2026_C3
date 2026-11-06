#include <stdio.h>

#define MAX 50

/* Suma de matrices bidimensionales. */

void Lectura(int A[][MAX], int F, int C);
void Suma(int M1[][MAX], int M2[][MAX], int M3[][MAX], int F, int C);
void Imprime(int A[][MAX], int F, int C);

void main(void)
{
    int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
    int FIL, COL;

    do {
        printf("Ingrese el numero de filas (1-50): ");
        scanf("%d", &FIL);
    } while (FIL < 1 || FIL > MAX);

    do {
        printf("Ingrese el numero de columnas (1-50): ");
        scanf("%d", &COL);
    } while (COL < 1 || COL > MAX);

    printf("\n--- Lectura Matriz A ---\n");
    Lectura(MA, FIL, COL);

    printf("\n--- Lectura Matriz B ---\n");
    Lectura(MB, FIL, COL);

    Suma(MA, MB, MC, FIL, COL);

    printf("\n--- Matriz Resultante (A + B) ---\n");
    Imprime(MC, FIL, COL);
}

void Lectura(int A[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
        {
            printf("Ingrese elemento [%d][%d]: ", I + 1, J + 1);
            scanf("%d", &A[I][J]);
        }
    }
}

void Suma(int M1[][MAX], int M2[][MAX], int M3[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
        {
            M3[I][J] = M1[I][J] + M2[I][J];
        }
    }
}

void Imprime(int A[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
        {
            printf("%d\t", A[I][J]);
        }
        printf("\n");
    }
}
