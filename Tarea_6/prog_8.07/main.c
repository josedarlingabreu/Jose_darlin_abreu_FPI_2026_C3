#include <stdio.h>
#include <string.h>

typedef struct
{
    char mat[20];
    int pro;
} matpro;

typedef struct
{
    int matri;
    char nom[20];
    matpro cal[5];
} alumno;

void Lectura(alumno A[], int T);
void F1(alumno A[], int T);
void F2(alumno A[], int T);
void F3(alumno A[], int T);

void main(void)
{
    alumno ALU[50];
    int TAM;
    do
    {
        printf("Ingrese el tamano del arreglo (1-50): ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);

    Lectura(ALU, TAM);
    F1(ALU, TAM);
    F2(ALU, TAM);
    F3(ALU, TAM);
}

void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\nDatos del alumno %d:\n", I + 1);
        printf("Matricula: ");
        scanf("%d", &A[I].matri);
        fflush(stdin);
        printf("Nombre: ");
        fgets(A[I].nom, sizeof(A[I].nom), stdin);
        A[I].nom[strcspn(A[I].nom, "\n")] = 0;

        for (J = 0; J < 5; J++)
        {
            fflush(stdin);
            printf("Materia %d: ", J + 1);
            fgets(A[I].cal[J].mat, sizeof(A[I].cal[J].mat), stdin);
            A[I].cal[J].mat[strcspn(A[I].cal[J].mat, "\n")] = 0;
            printf("Promedio %d: ", J + 1);
            scanf("%d", &A[I].cal[J].pro);
        }
    }
}

void F1(alumno A[], int T)
{
    int I, J;
    float SUM;
    for (I = 0; I < T; I++)
    {
        printf("Matricula: %d", A[I].matri);
        SUM = 0.0;
        for (J = 0; J < 5; J++)
            SUM += A[I].cal[J].pro;
        printf("\tPromedio general: %.2f\n", SUM / 5);
    }
}

void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumnos con calificacion mayor a 9 en la tercera materia:\n");
    for (I = 0; I < T; I++)
    {
        if (A[I].cal[2].pro > 9)
            printf("Matricula: %d\n", A[I].matri);
    }
}

void F3(alumno A[], int T)
{
    int I;
    float SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += A[I].cal[3].pro;
    printf("\nPromedio general de la cuarta materia: %.2f\n", SUM / T);
}
