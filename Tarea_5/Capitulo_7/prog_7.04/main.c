#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad0[] = "Buenas tardes";
    char cad1[20];

    printf("Cadena 0: %s\n", cad0);
    printf("Ingrese una cadena de texto: ");
    fgets(cad1, sizeof(cad1), stdin);
    printf("Cadena ingresada: %s", cad1);
}
