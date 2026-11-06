#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad0[] = "Mexico";
    char cad1[] = "Colombia";

    printf("Longitud de '%s': %zu caracteres\n", cad0, strlen(cad0));

    if (strcmp(cad0, cad1) == 0)
        printf("Las cadenas son iguales.\n");
    else
        printf("Las cadenas son diferentes.\n");
}
