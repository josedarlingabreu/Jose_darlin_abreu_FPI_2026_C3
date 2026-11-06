#include <stdio.h>

/* Asignación de asientos de un autobús. */

#define FILAS 5
#define COLS 4

void main(void)
{
    int ASIENTOS[FILAS][COLS] = {0};
    int F, C;

    printf("Reserva de Asiento:\n");
    printf("Ingrese numero de fila (1-5): ");
    scanf("%d", &F);
    printf("Ingrese numero de columna (1-4): ");
    scanf("%d", &C);

    if (F >= 1 && F <= FILAS && C >= 1 && C <= COLS)
    {
        ASIENTOS[F - 1][C - 1] = 1;
        printf("Asiento [%d][%d] reservado con exito.\n", F, C);
    }
    else
    {
        printf("Ubicacion invalida.\n");
    }
}
