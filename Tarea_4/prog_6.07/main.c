#include <stdio.h>

/* Fabrica de golosinas: cálculo de costos y producción mensual. */

#define MESES 12
#define PLANTAS 3

void main(void)
{
    float PRODUCCION[PLANTAS][MESES] = {
        {1200.5, 1300.0, 1100.0, 1400.0, 1500.0, 1600.0, 1100.0, 1250.0, 1300.0, 1400.0, 1500.0, 1700.0},
        {900.0, 950.0, 1000.0, 1050.0, 1100.0, 1150.0, 1200.0, 1250.0, 1300.0, 1350.0, 1400.0, 1450.0},
        {2000.0, 2100.0, 1900.0, 2200.0, 2300.0, 2400.0, 2500.0, 2600.0, 2700.0, 2800.0, 2900.0, 3000.0}
    };
    int I, J;
    float TOTAL;

    for (I = 0; I < PLANTAS; I++)
    {
        TOTAL = 0;
        for (J = 0; J < MESES; J++)
            TOTAL += PRODUCCION[I][J];
        printf("Produccion Total Planta %d: %.2f unidades\n", I + 1, TOTAL);
    }
}
