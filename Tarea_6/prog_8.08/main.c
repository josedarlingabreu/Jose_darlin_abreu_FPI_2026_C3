#include <stdio.h>
#include <string.h>

typedef struct
{
    char cal[20];
    int num;
    char col[20];
    char cp[5];
    char ciu[20];
} domicilio;

typedef struct
{
    char nom[20];
    int edad;
    char sexo;
    int con;
    domicilio dom;
    char tel[10];
} paciente;

void Lectura(paciente A[], int T);
void F1(paciente A[], int T);
void F2(paciente A[], int T);
void F3(paciente A[], int T);

void main(void)
{
    paciente HOSPITAL[100];
    int TAM;
    do
    {
        printf("Ingrese el numero de pacientes (1-100): ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(HOSPITAL, TAM);
    F1(HOSPITAL, TAM);
    F2(HOSPITAL, TAM);
    F3(HOSPITAL, TAM);
}

void Lectura(paciente A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nPaciente %d:\n", I + 1);
        fflush(stdin);
        printf("Nombre: ");
        fgets(A[I].nom, sizeof(A[I].nom), stdin);
        A[I].nom[strcspn(A[I].nom, "\n")] = 0;
        printf("Edad: ");
        scanf("%d", &A[I].edad);
        fflush(stdin);
        printf("Sexo (F/M): ");
        scanf("%c", &A[I].sexo);
        printf("Condicion (1-5): ");
        scanf("%d", &A[I].con);
        fflush(stdin);
        printf("Calle: ");
        fgets(A[I].dom.cal, sizeof(A[I].dom.cal), stdin);
        A[I].dom.cal[strcspn(A[I].dom.cal, "\n")] = 0;
        printf("Numero: ");
        scanf("%d", &A[I].dom.num);
        fflush(stdin);
        printf("Colonia: ");
        fgets(A[I].dom.col, sizeof(A[I].dom.col), stdin);
        A[I].dom.col[strcspn(A[I].dom.col, "\n")] = 0;
        printf("Codigo Postal: ");
        fgets(A[I].dom.cp, sizeof(A[I].dom.cp), stdin);
        A[I].dom.cp[strcspn(A[I].dom.cp, "\n")] = 0;
        printf("Ciudad: ");
        fgets(A[I].dom.ciu, sizeof(A[I].dom.ciu), stdin);
        A[I].dom.ciu[strcspn(A[I].dom.ciu, "\n")] = 0;
        printf("Telefono: ");
        fgets(A[I].tel, sizeof(A[I].tel), stdin);
        A[I].tel[strcspn(A[I].tel, "\n")] = 0;
    }
}

void F1(paciente A[], int T)
{
    int I, FEM = 0, MAS = 0, TOT;
    for (I = 0; I < T; I++)
    {
        if (A[I].sexo == 'F' || A[I].sexo == 'f') FEM++;
        else if (A[I].sexo == 'M' || A[I].sexo == 'm') MAS++;
    }
    TOT = FEM + MAS;
    if (TOT > 0)
    {
        printf("\nPorcentaje Hombres: %.2f%%\n", (float)MAS / TOT * 100);
        printf("Porcentaje Mujeres: %.2f%%\n", (float)FEM / TOT * 100);
    }
}

void F2(paciente A[], int T)
{
    int I, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;
    for (I = 0; I < T; I++)
    {
        switch (A[I].con)
        {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
        }
    }
    printf("\nPacientes por condicion: C1=%d, C2=%d, C3=%d, C4=%d, C5=%d\n", C1, C2, C3, C4, C5);
}

void F3(paciente A[], int T)
{
    int I;
    printf("\nPacientes en estado de gravedad (Condicion 5):\n");
    for (I = 0; I < T; I++)
    {
        if (A[I].con == 5)
            printf("Nombre: %s | Telefono: %s\n", A[I].nom, A[I].tel);
    }
}
