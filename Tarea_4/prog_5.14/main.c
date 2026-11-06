#include <stdio.h>

/* Estadísticas de un conjunto de datos: Media, Varianza y Desviación Estándar. */
#include <math.h>

float Media(int VEC[], int T);
float Varianza(int VEC[], int T, float MED);

void main(void)
{
    int DATOS[5] = {10, 12, 23, 23, 16};
    float MED, VAR, DES;

    MED = Media(DATOS, 5);
    VAR = Varianza(DATOS, 5, MED);
    DES = sqrt(VAR);

    printf("Media: %.2f\n", MED);
    printf("Varianza: %.2f\n", VAR);
    printf("Desviacion Estandar: %.2f\n", DES);
}

float Media(int VEC[], int T)
{
    int I, SUM = 0;
    for (I = 0; I < T; I++)
        SUM += VEC[I];
    return (float)SUM / T;
}

float Varianza(int VEC[], int T, float MED)
{
    int I;
    float SUM = 0;
    for (I = 0; I < T; I++)
        SUM += pow(VEC[I] - MED, 2);
    return SUM / T;
}
