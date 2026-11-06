#include <stdio.h>

/* Lluvia anual registrada en distintas regiones geográficas. */

#define REGIONES 4
#define MESES 12

void main(void)
{
    float LLUVIA[REGIONES][MESES] = {0};
    int I;

    LLUVIA[0][0] = 45.2; /* Region 1, Enero */
    LLUVIA[1][5] = 120.4; /* Region 2, Junio */

    printf("Registro de lluvias cargado correctamente.\n");
    printf("Lluvia Region 1 (Enero): %.1f mm\n", LLUVIA[0][0]);
    printf("Lluvia Region 2 (Junio): %.1f mm\n", LLUVIA[1][5]);
}
