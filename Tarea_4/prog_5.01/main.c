#include <stdio.h>

/* Cuenta de números: cuenta cuántas veces aparece un número entero en un arreglo unidimensional. */

void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[5];

    for (I = 0; I < 5; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &ARRE[I]);
    }

    printf("\nIngrese el numero que desea buscar: ");
    scanf("%d", &NUM);

    for (I = 0; I < 5; I++)
    {
        if (ARRE[I] == NUM)
            CUE++;
    }

    printf("\nEl numero %d se encuentra %d veces en el arreglo.\n", NUM, CUE);
}
