#include <stdio.h>

/* Ordenamiento por Inserción Directa. */

void Insercion(int VEC[], int T);
void Imprime(int VEC[], int T);

void main(void)
{
    int DATOS[6] = {64, 25, 12, 22, 11, 90};

    printf("Arreglo original:\n");
    Imprime(DATOS, 6);

    Insercion(DATOS, 6);

    printf("\nArreglo ordenado por Insercion:\n");
    Imprime(DATOS, 6);
}

void Insercion(int VEC[], int T)
{
    int I, KEY, J;
    for (I = 1; I < T; I++)
    {
        KEY = VEC[I];
        J = I - 1;
        while (J >= 0 && VEC[J] > KEY)
        {
            VEC[J + 1] = VEC[J];
            J--;
        }
        VEC[J + 1] = KEY;
    }
}

void Imprime(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("%d ", VEC[I]);
    printf("\n");
}
