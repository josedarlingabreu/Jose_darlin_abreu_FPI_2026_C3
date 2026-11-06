#include <stdio.h>

/* Arreglo dinámico utilizando punteros. */

void main(void)
{
    int ARRE[5] = {100, 200, 300, 400, 500};
    int *P;
    int I;

    P = ARRE; /* Puntero apuntando al primer elemento del arreglo */

    printf("Lectura por Aritmetica de Punteros:\n");
    for (I = 0; I < 5; I++)
    {
        printf("Posicion %d -> Valor: %d\n", I, *(P + I));
    }
}
