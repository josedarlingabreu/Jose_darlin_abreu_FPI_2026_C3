#include <stdio.h>
#include <string.h>

typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

void Lectura(producto A[], int T);
void Ventas(producto A[], int T);
void Reabastecimiento(producto A[], int T);
void Nuevos_Productos(producto A[], int *T);
void Inventario(producto A[], int T);

void main(void)
{
    producto INV[100];
    int TAM, OPE;

    do
    {
        printf("Ingrese el numero de productos (1-100): ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(INV, TAM);

    printf("\nMenu: 1-Ventas, 2-Reabastecimiento, 3-Nuevos Productos, 4-Inventario, 0-Salir: ");
    scanf("%d", &OPE);

    while (OPE != 0)
    {
        switch (OPE)
        {
            case 1: Ventas(INV, TAM); break;
            case 2: Reabastecimiento(INV, TAM); break;
            case 3: Nuevos_Productos(INV, &TAM); break;
            case 4: Inventario(INV, TAM); break;
        }
        printf("\nMenu: 1-Ventas, 2-Reabastecimiento, 3-Nuevos Productos, 4-Inventario, 0-Salir: ");
        scanf("%d", &OPE);
    }
}

void Lectura(producto A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nProducto %d:\n", I + 1);
        printf("Clave: ");
        scanf("%d", &A[I].clave);
        fflush(stdin);
        printf("Nombre: ");
        fgets(A[I].nombre, sizeof(A[I].nombre), stdin);
        A[I].nombre[strcspn(A[I].nombre, "\n")] = 0;
        printf("Precio: ");
        scanf("%f", &A[I].precio);
        printf("Existencia: ");
        scanf("%d", &A[I].existencia);
    }
}

void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT = 0, PAR;
    printf("Ingrese clave del producto (0 para salir): ");
    scanf("%d", &CLA);
    while (CLA != 0)
    {
        printf("Ingrese la cantidad: ");
        scanf("%d", &CAN);
        I = 0;
        while ((I < T) && (A[I].clave < CLA)) I++;
        if ((I == T) || (A[I].clave > CLA))
            printf("La clave ingresada es incorrecta.\n");
        else if (A[I].existencia >= CAN)
        {
            A[I].existencia -= CAN;
            PAR = A[I].precio * CAN;
            TOT += PAR;
        }
        else
        {
            printf("No existe en inventario la cantidad solicitada. Solo hay %d\n", A[I].existencia);
            printf("Los lleva? 1-Si / 0-No: ");
            scanf("%d", &RES);
            if (RES)
            {
                PAR = A[I].precio * A[I].existencia;
                A[I].existencia = 0;
                TOT += PAR;
            }
        }
        printf("Ingrese siguiente clave (0 para salir): ");
        scanf("%d", &CLA);
    }
    printf("Total de la venta: %.2f\n", TOT);
}

void Reabastecimiento(producto A[], int T)
{
    int CLA, CAN, I;
    printf("Ingrese clave del producto (0 para salir): ");
    scanf("%d", &CLA);
    while (CLA != 0)
    {
        I = 0;
        while ((I < T) && (A[I].clave < CLA)) I++;
        if ((I == T) || (A[I].clave > CLA))
            printf("Clave incorrecta.\n");
        else
        {
            printf("Cantidad a agregar: ");
            scanf("%d", &CAN);
            A[I].existencia += CAN;
        }
        printf("Ingrese siguiente clave (0 para salir): ");
        scanf("%d", &CLA);
    }
}

void Nuevos_Productos(producto A[], int *T)
{
    int CLA, I, J;
    printf("Ingrese clave del producto nuevo (0 para salir): ");
    scanf("%d", &CLA);
    while ((*T < 100) && (CLA != 0))
    {
        I = 0;
        while ((I < *T) && (A[I].clave < CLA)) I++;
        if (I == *T)
        {
            A[I].clave = CLA;
            fflush(stdin);
            printf("Nombre: ");
            fgets(A[I].nombre, sizeof(A[I].nombre), stdin);
            A[I].nombre[strcspn(A[I].nombre, "\n")] = 0;
            printf("Precio: ");
            scanf("%f", &A[I].precio);
            printf("Cantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }
        else if (A[I].clave == CLA)
            printf("El producto ya se encuentra en el inventario.\n");
        else
        {
            for (J = *T; J > I; J--)
                A[J] = A[J - 1];
            A[I].clave = CLA;
            fflush(stdin);
            printf("Nombre: ");
            fgets(A[I].nombre, sizeof(A[I].nombre), stdin);
            A[I].nombre[strcspn(A[I].nombre, "\n")] = 0;
            printf("Precio: ");
            scanf("%f", &A[I].precio);
            printf("Cantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }
        printf("Ingrese otra clave (0 para salir): ");
        scanf("%d", &CLA);
    }
}

void Inventario(producto A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Clave: %d | Nombre: %s | Precio: %.2f | Existencia: %d\n",
               A[I].clave, A[I].nombre, A[I].precio, A[I].existencia);
    }
}
