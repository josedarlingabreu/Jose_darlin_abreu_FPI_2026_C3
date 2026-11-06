#include <stdio.h>

/* Ordenamiento por Método de la Burbuja (Bubble Sort). */

void Burbuja(int VEC[], int T);
void Imprime(int VEC[], int T);

void main(void)
{
    int DATOS[5] = {50, 10, 40, 20, 30};

    printf("Arreglo desordenado:\n");
    Imprime(DATOS, 5);

    Burbuja(DATOS, 5);

    printf("\nArreglo ordenado con Burbuja:\n");
    Imprime(DATOS, 5);
}

void Burbuja(int VEC[], int T)
{
    int I, J, AUX;
    for (I = 0; I < T - 1; I++)
    {
        for (J = 0; J < T - I - 1; J++)
        {
            if (VEC[J] > VEC[J + 1])
            {
                AUX = VEC[J];
                VEC[J] = VEC[J + 1];
                VEC[J + 1] = AUX;
            }
        }
    }
}

void Imprime(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("%d ", VEC[I]);
    printf("\n");
}
