#include <stdio.h>

/* Arreglos tridimensionales: lectura e impresión. */

void main(void)
{
    int CUBO[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int I, J, K;

    printf("Recorrido de Arreglo Tridimensional (2x2x2):\n");
    for (I = 0; I < 2; I++)
    {
        for (J = 0; J < 2; J++)
        {
            for (K = 0; K < 2; K++)
            {
                printf("CUBO[%d][%d][%d] = %d\n", I, J, K, CUBO[I][J][K]);
            }
        }
    }
}
