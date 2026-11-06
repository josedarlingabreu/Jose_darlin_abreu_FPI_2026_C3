#include <stdio.h>

/* Apuntadores y arreglos: uso de punteros para modificar y recorrer elementos de un vector. */

void main(void)
{
    int IX, MAX = 5;
    int ARRE[5] = {10, 20, 30, 40, 50};
    int *APU;

    APU = ARRE; /* APU apunta al inicio del arreglo */

    printf("Elementos del arreglo impresos usando punteros:\n");
    for (IX = 0; IX < MAX; IX++)
    {
        printf("Elemento %d: %d (Direccion: %p)\n", IX + 1, *(APU + IX), (void*)(APU + IX));
    }
}
