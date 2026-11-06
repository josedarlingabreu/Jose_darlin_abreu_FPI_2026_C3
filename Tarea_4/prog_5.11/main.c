#include <stdio.h>

/* Ordenamiento por Selección Directa. */

void Seleccion(int VEC[], int T);
void Imprime(int VEC[], int T);

void main(void)
{
    int DATOS[5] = {45, 12, 89, 3, 27};

    printf("Arreglo original:\n");
    Imprime(DATOS, 5);

    Seleccion(DATOS, 5);

    printf("\nArreglo ordenado por Seleccion:\n");
    Imprime(DATOS, 5);
}

void Seleccion(int VEC[], int T)
{
    int I, J, MENOR, MENOR_IDX, AUX;
    for (I = 0; I < T - 1; I++)
    {
        MENOR = VEC[I];
        MENOR_IDX = I;
        for (J = I + 1; J < T; J++)
        {
            if (VEC[J] < MENOR)
            {
                MENOR = VEC[J];
                MENOR_IDX = J;
            }
        }
        AUX = VEC[I];
        VEC[I] = VEC[MENOR_IDX];
        VEC[MENOR_IDX] = AUX;
    }
}

void Imprime(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("%d ", VEC[I]);
    printf("\n");
}
