#include <stdio.h>

/* Búsqueda secuencial en un arreglo ordenado. */

int BusquedaSecuencial(int VEC[], int T, int CLAVE);

void main(void)
{
    int DATOS[5] = {12, 25, 34, 48, 50};
    int NUM, POS;

    printf("Arreglo disponible: 12, 25, 34, 48, 50\n");
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &NUM);

    POS = BusquedaSecuencial(DATOS, 5, NUM);

    if (POS != -1)
        printf("El valor %d se encuentra en la posicion (indice) %d.\n", NUM, POS);
    else
        printf("El valor %d no fue encontrado.\n", NUM);
}

int BusquedaSecuencial(int VEC[], int T, int CLAVE)
{
    int I;
    for (I = 0; I < T; I++)
    {
        if (VEC[I] == CLAVE)
            return I;
    }
    return -1;
}
