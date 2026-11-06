#include <stdio.h>

/* Elección de candidatos: cuenta los votos acumulados para 5 candidatos. */

void main(void)
{
    int ELE[5] = {0};
    int VOTO, I;

    printf("Ingrese el voto (1-5) [0 para terminar]: ");
    scanf("%d", &VOTO);

    while (VOTO != 0)
    {
        if (VOTO >= 1 && VOTO <= 5)
            ELE[VOTO - 1]++;
        else
            printf("Voto invalido.\n");

        printf("Ingrese el siguiente voto (1-5) [0 para terminar]: ");
        scanf("%d", &VOTO);
    }

    printf("\n--- Resultados de la Eleccion ---\n");
    for (I = 0; I < 5; I++)
    {
        printf("Candidato %d: %d votos\n", I + 1, ELE[I]);
    }
}
