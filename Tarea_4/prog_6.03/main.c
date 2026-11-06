#include <stdio.h>

/* Universidad: promedio de alumnos en matrices bidimensionales. */

#define ALUM 3
#define EXAM 4

void Lectura(float A[][EXAM], int F, int C);
void Promedio(float A[][EXAM], int F, int C);

void main(void)
{
    float NOTAS[ALUM][EXAM] = {
        {8.5, 9.0, 7.5, 10.0},
        {6.0, 7.0, 8.0, 6.5},
        {9.5, 9.0, 9.5, 9.0}
    };

    Promedio(NOTAS, ALUM, EXAM);
}

void Promedio(float A[][EXAM], int F, int C)
{
    int I, J;
    float SUM, PROM;

    for (I = 0; I < F; I++)
    {
        SUM = 0;
        for (J = 0; J < C; J++)
            SUM += A[I][J];
        PROM = SUM / C;
        printf("Promedio Alumno %d: %.2f\n", I + 1, PROM);
    }
}
