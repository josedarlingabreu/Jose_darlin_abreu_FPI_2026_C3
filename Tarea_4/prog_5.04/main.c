#include <stdio.h>

#define MAX 10

/* Producto de vectores: multiplica dos arreglos elemento a elemento usando punteros. */

void Lectura(int VEC[], int T);
void Imprime(int VEC[], int T);
void Producto(int* X, int* Y, int* Z, int T);

void main(void)
{
    int VE1[MAX], VE2[MAX], VE3[MAX];

    printf("--- Lectura del primer vector ---\n");
    Lectura(VE1, MAX);

    printf("\n--- Lectura del segundo vector ---\n");
    Lectura(VE2, MAX);

    Producto(VE1, VE2, VE3, MAX);

    printf("\n--- Producto de los Vectores ---\n");
    Imprime(VE3, MAX);
}

void Lectura(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &VEC[I]);
    }
}

void Imprime(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Elemento %d: %d\n", I + 1, VEC[I]);
    }
}

void Producto(int* X, int* Y, int* Z, int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        Z[I] = X[I] * Y[I];
    }
}
