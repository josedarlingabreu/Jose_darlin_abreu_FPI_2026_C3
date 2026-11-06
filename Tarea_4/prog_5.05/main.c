#include <stdio.h>

/* Frecuencia de calificaciones: calcula la frecuencia de notas del 0 al 10 en un grupo. */

#define MAX 50

void Lectura(int VEC[], int T);
void Frecuencia(int VEC[], int T, int FRE[]);
void Imprime(int FRE[], int T);

void main(void)
{
    int CAL[MAX], FRE[11] = {0};
    int N;

    do {
        printf("Ingrese el numero de alumnos (1-50): ");
        scanf("%d", &N);
    } while (N < 1 || N > MAX);

    Lectura(CAL, N);
    Frecuencia(CAL, N, FRE);

    printf("\n--- Frecuencia de Calificaciones ---\n");
    Imprime(FRE, 11);
}

void Lectura(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        do {
            printf("Ingrese la calificacion (0-10) del alumno %d: ", I + 1);
            scanf("%d", &VEC[I]);
        } while (VEC[I] < 0 || VEC[I] > 10);
    }
}

void Frecuencia(int VEC[], int T, int FRE[])
{
    int I;
    for (I = 0; I < T; I++)
    {
        FRE[VEC[I]]++;
    }
}

void Imprime(int FRE[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Calificacion %d: %d alumnos\n", I, FRE[I]);
    }
}
