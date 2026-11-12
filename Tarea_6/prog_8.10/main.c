#include <stdio.h>
#include <string.h>

typedef struct
{
    char noba[10];
    char nucu[10];
} banco;

typedef union
{
    banco che;
    banco nomi;
    char venta;
} fpago;

typedef struct
{
    char cnu[20];
    char col[20];
    char cp[5];
    char ciu[15];
} domicilio;

typedef struct
{
    int num;
    char nom[20];
    float ven[12];
    domicilio domi;
    float sal;
    fpago pago;
    int cla;
} vendedor;

void Lectura(vendedor A[], int T);
void F1(vendedor A[], int T);
void F2(vendedor A[], int T);
void F3(vendedor A[], int T);
void F4(vendedor A[], int T);

void main(void)
{
    vendedor VENDEDORES[100];
    int TAM;
    do
    {
        printf("Ingrese el numero de vendedores (1-100): ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(VENDEDORES, TAM);
    F1(VENDEDORES, TAM);
    F2(VENDEDORES, TAM);
    F3(VENDEDORES, TAM);
    F4(VENDEDORES, TAM);
}

void Lectura(vendedor A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        printf("\nVendedor %d:\n", I + 1);
        printf("Numero: ");
        scanf("%d", &A[I].num);
        fflush(stdin);
        printf("Nombre: ");
        fgets(A[I].nom, sizeof(A[I].nom), stdin);
        A[I].nom[strcspn(A[I].nom, "\n")] = 0;
        for (J = 0; J < 12; J++)
        {
            printf("Venta mes %d: ", J + 1);
            scanf("%f", &A[I].ven[J]);
        }
        fflush(stdin);
        printf("Calle y numero: ");
        fgets(A[I].domi.cnu, sizeof(A[I].domi.cnu), stdin);
        A[I].domi.cnu[strcspn(A[I].domi.cnu, "\n")] = 0;
        printf("Colonia: ");
        fgets(A[I].domi.col, sizeof(A[I].domi.col), stdin);
        A[I].domi.col[strcspn(A[I].domi.col, "\n")] = 0;
        printf("Codigo Postal: ");
        fgets(A[I].domi.cp, sizeof(A[I].domi.cp), stdin);
        A[I].domi.cp[strcspn(A[I].domi.cp, "\n")] = 0;
        printf("Ciudad: ");
        fgets(A[I].domi.ciu, sizeof(A[I].domi.ciu), stdin);
        A[I].domi.ciu[strcspn(A[I].domi.ciu, "\n")] = 0;
        printf("Salario: ");
        scanf("%f", &A[I].sal);
        printf("Forma de pago (1-Banco, 2-Nomina, 3-Ventanilla): ");
        scanf("%d", &A[I].cla);
        fflush(stdin);
        switch (A[I].cla)
        {
            case 1:
                printf("Banco: ");
                fgets(A[I].pago.che.noba, sizeof(A[I].pago.che.noba), stdin);
                A[I].pago.che.noba[strcspn(A[I].pago.che.noba, "\n")] = 0;
                printf("Cuenta: ");
                fgets(A[I].pago.che.nucu, sizeof(A[I].pago.che.nucu), stdin);
                A[I].pago.che.nucu[strcspn(A[I].pago.che.nucu, "\n")] = 0;
                break;
            case 2:
                printf("Banco: ");
                fgets(A[I].pago.nomi.noba, sizeof(A[I].pago.nomi.noba), stdin);
                A[I].pago.nomi.noba[strcspn(A[I].pago.nomi.noba, "\n")] = 0;
                printf("Cuenta: ");
                fgets(A[I].pago.nomi.nucu, sizeof(A[I].pago.nomi.nucu), stdin);
                A[I].pago.nomi.nucu[strcspn(A[I].pago.nomi.nucu, "\n")] = 0;
                break;
            case 3:
                A[I].pago.venta = 'S';
                break;
        }
    }
}

void F1(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\nVentas totales de los vendedores:\n");
    for (I = 0; I < T; I++)
    {
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];
        printf("Vendedor: %d | Ventas: %.2f\n", A[I].num, SUM);
    }
}

void F2(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\nIncremento de 5%% a vendedores con ventas > 1,500,000:\n");
    for (I = 0; I < T; I++)
    {
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];
        if (SUM > 1500000.00)
        {
            A[I].sal = A[I].sal * 1.05;
            printf("Numero: %d | Nuevo salario: %.2f\n", A[I].num, A[I].sal);
        }
    }
}

void F3(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\nVendedores con ventas < 300,000:\n");
    for (I = 0; I < T; I++)
    {
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];
        if (SUM < 300000.00)
            printf("Numero: %d | Nombre: %s | Ventas: %.2f\n", A[I].num, A[I].nom, SUM);
    }
}

void F4(vendedor A[], int T)
{
    int I;
    printf("\nVendedores con cuenta en el banco:\n");
    for (I = 0; I < T; I++)
    {
        if (A[I].cla == 1)
            printf("Numero: %d | Banco: %s | Cuenta: %s\n",
                   A[I].num, A[I].pago.che.noba, A[I].pago.che.nucu);
    }
}
