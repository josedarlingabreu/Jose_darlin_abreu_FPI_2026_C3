#include <stdio.h>
#include <string.h>

typedef struct
{
    char zona[20];
    char calle[20];
    char colo[20];
} ubicacion;

typedef struct
{
    char clave[5];
    float scu;
    float ste;
    char car[50];
    ubicacion ubi;
    float precio;
    char dispo;
} propiedades;

void Lectura(propiedades A[], int T);
void F1(propiedades A[], int T);
void F2(propiedades A[], int T);

void main(void)
{
    propiedades PROPIE[100];
    int TAM;
    do
    {
        printf("Ingrese el numero de propiedades (1-100): ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(PROPIE, TAM);
    F1(PROPIE, TAM);
    F2(PROPIE, TAM);
}

void Lectura(propiedades A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nPropiedad %d:\n", I + 1);
        fflush(stdin);
        printf("Clave: ");
        fgets(A[I].clave, sizeof(A[I].clave), stdin);
        A[I].clave[strcspn(A[I].clave, "\n")] = 0;
        printf("Superficie cubierta: ");
        scanf("%f", &A[I].scu);
        printf("Superficie terreno: ");
        scanf("%f", &A[I].ste);
        fflush(stdin);
        printf("Caracteristicas: ");
        fgets(A[I].car, sizeof(A[I].car), stdin);
        A[I].car[strcspn(A[I].car, "\n")] = 0;
        printf("Zona: ");
        fgets(A[I].ubi.zona, sizeof(A[I].ubi.zona), stdin);
        A[I].ubi.zona[strcspn(A[I].ubi.zona, "\n")] = 0;
        printf("Calle: ");
        fgets(A[I].ubi.calle, sizeof(A[I].ubi.calle), stdin);
        A[I].ubi.calle[strcspn(A[I].ubi.calle, "\n")] = 0;
        printf("Colonia: ");
        fgets(A[I].ubi.colo, sizeof(A[I].ubi.colo), stdin);
        A[I].ubi.colo[strcspn(A[I].ubi.colo, "\n")] = 0;
        printf("Precio: ");
        scanf("%f", &A[I].precio);
        fflush(stdin);
        printf("Disponibilidad (V-Venta / R-Renta): ");
        scanf("%c", &A[I].dispo);
    }
}

void F1(propiedades A[], int T)
{
    int I;
    printf("\nListado de propiedades para Venta en Miraflores (450,000 - 650,000):\n");
    for (I = 0; I < T; I++)
    {
        if ((A[I].dispo == 'V') && (strcmp(A[I].ubi.zona, "Miraflores") == 0))
        {
            if ((A[I].precio >= 450000) && (A[I].precio <= 650000))
            {
                printf("Clave: %s | Superficie cubierta: %.2f | Precio: %.2f\n",
                       A[I].clave, A[I].scu, A[I].precio);
            }
        }
    }
}

void F2(propiedades A[], int T)
{
    int I;
    float li, ls;
    char zon[20];
    printf("\nListado de propiedades para Renta:\n");
    fflush(stdin);
    printf("Ingrese zona geografica: ");
    fgets(zon, sizeof(zon), stdin);
    zon[strcspn(zon, "\n")] = 0;
    printf("Limite inferior de precio: ");
    scanf("%f", &li);
    printf("Limite superior de precio: ");
    scanf("%f", &ls);

    for (I = 0; I < T; I++)
    {
        if ((A[I].dispo == 'R') && (strcmp(A[I].ubi.zona, zon) == 0))
        {
            if ((A[I].precio >= li) && (A[I].precio <= ls))
            {
                printf("Clave: %s | Calle: %s | Precio: %.2f\n",
                       A[I].clave, A[I].ubi.calle, A[I].precio);
            }
        }
    }
}
