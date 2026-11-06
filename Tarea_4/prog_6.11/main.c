#include <stdio.h>

/* Casa de bolsa: rendimientos de acciones registradas. */

#define MESES 6
#define EMPRESAS 3

void main(void)
{
    float ACCIONES[EMPRESAS][MESES] = {
        {10.5, 11.2, 12.0, 11.8, 12.5, 13.0},
        {50.0, 49.5, 51.0, 52.0, 51.5, 53.0},
        {5.0,  5.1,  4.9,  5.2,  5.3,  5.5}
    };
    int I, J;
    float PROMEDIO;

    for (I = 0; I < EMPRESAS; I++)
    {
        PROMEDIO = 0;
        for (J = 0; J < MESES; J++)
            PROMEDIO += ACCIONES[I][J];
        printf("Rendimiento Promedio Empresa %d: %.2f\n", I + 1, PROMEDIO / MESES);
    }
}
