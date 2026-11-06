#include <stdio.h>

/* Promedio de exámenes con matriz tridimensional. */

#define CARRERAS 2
#define ALUMNOS 2
#define EXAMENES 2

void main(void)
{
    float DATOS[CARRERAS][ALUMNOS][EXAMENES] = {
        {{{8.0, 9.0}, {7.0, 8.5}},
        {{{9.5, 10.0}, {6.5, 7.0}}}
    };
    int I, J, K;
    float SUM;

    for (I = 0; I < CARRERAS; I++)
    {
        printf("\n--- Carrera %d ---\n", I + 1);
        for (J = 0; J < ALUMNOS; J++)
        {
            SUM = 0;
            for (K = 0; K < EXAMENES; K++)
            {
                SUM += DATOS[I][J][K];
            }
            printf("Promedio Alumno %d: %.2f\n", J + 1, SUM / EXAMENES);
        }
    }
}
