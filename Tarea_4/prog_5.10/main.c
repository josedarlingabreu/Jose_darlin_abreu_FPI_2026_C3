#include <stdio.h>

/* Búsqueda binaria en un arreglo ordenado. */

int BusquedaBinaria(int VEC[], int T, int CLAVE);

void main(void)
{
    int DATOS[8] = {5, 15, 23, 38, 42, 59, 67, 81};
    int NUM, POS;

    printf("Arreglo ordenado: 5, 15, 23, 38, 42, 59, 67, 81\n");
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &NUM);

    POS = BusquedaBinaria(DATOS, 8, NUM);

    if (POS != -1)
        printf("El valor %d fue encontrado en la posicion %d.\n", NUM, POS);
    else
        printf("El valor %d no existe en el arreglo.\n", NUM);
}

int BusquedaBinaria(int VEC[], int T, int CLAVE)
{
    int IZQ = 0, DER = T - 1, CEN;

    while (IZQ <= DER)
    {
        CEN = (IZQ + DER) / 2;
        if (VEC[CEN] == CLAVE)
            return CEN;
        else if (CLAVE > VEC[CEN])
            IZQ = CEN + 1;
        else
            DER = CEN - 1;
    }
    return -1;
}
