#include <stdio.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nombre[30];
    float cal[5];
} alumno;

void Lectura(alumno A[], int T);
void F1(alumno A[], int T);
void F2(alumno A[], int T);
void F3(alumno A[], int T);

void main(void)
{
    alumno ARRE[50];
    int TAM;

    do
    {
        printf("Ingrese el tamano del arreglo (1-50): ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);

    Lectura(ARRE, TAM);
    F1(ARRE, TAM);
    F2(ARRE, TAM);
    F3(ARRE, TAM);
}

void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese los datos del alumno %d\n", I + 1);
        printf("Matricula: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Nombre: ");
        fgets(A[I].nombre, sizeof(A[I].nombre), stdin);
        A[I].nombre[strcspn(A[I].nombre, "\n")] = 0;

        for (J = 0; J < 5; J++)
        {
            printf("Calificacion %d: ", J + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

void F1(alumno A[], int T)
{
    int I, J;
    float SUM, PRO;
    for (I = 0; I < T; I++)
    {
        printf("\nMatricula del alumno: %d", A[I].matricula);
        SUM = 0.0;
        for (J = 0; J < 5; J++)
            SUM += A[I].cal[J];
        PRO = SUM / 5;
        printf("\tPromedio: %.2f\n", PRO);
    }
}

void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumnos con calificacion en la tercera materia > 9:\n");
    for (I = 0; I < T; I++)
    {
        if (A[I].cal[2] > 9)
            printf("Matricula: %d\n", A[I].matricula);
    }
}

void F3(alumno A[], int T)
{
    int I;
    float PRO, SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += A[I].cal[3];
    PRO = SUM / T;
    printf("\nPromedio de la cuarta materia: %.2f\n", PRO);
}
