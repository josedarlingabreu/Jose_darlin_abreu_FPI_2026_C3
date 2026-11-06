#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad0[30] = "Hola ";
    char cad1[] = "Mundo";

    printf("Cadena original: %s\n", cad0);
    strcat(cad0, cad1);
    printf("Despues de strcat: %s\n", cad0);
}
