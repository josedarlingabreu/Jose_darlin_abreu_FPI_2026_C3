#include <stdio.h>

/* Empresa de transporte: control de choferes y kilómetros recorridos. */

#define CHOFERES 3
#define DIAS 6

void main(void)
{
    float KM[CHOFERES][DIAS] = {
        {100.5, 120.0, 80.5, 95.0, 110.0, 130.0},
        {200.0, 180.5, 210.0, 190.0, 220.0, 205.0},
        {150.0, 160.0, 140.0, 155.0, 165.0, 170.0}
    };
    int I, J;
    float TOTAL;

    for (I = 0; I < CHOFERES; I++)
    {
        TOTAL = 0;
        for (J = 0; J < DIAS; J++)
            TOTAL += KM[I][J];
        printf("Total KM Chofer %d: %.2f km\n", I + 1, TOTAL);
    }
}
