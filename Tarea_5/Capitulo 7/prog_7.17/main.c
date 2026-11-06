#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad[50], sub[50];
    int i, len;

    printf("Ingrese una cadena: ");
    fgets(cad, sizeof(cad), stdin);
    cad[strcspn(cad, "\n")] = 0;

    len = strlen(cad);
    for (i = 0; i < len; i++)
    {
        sub[i] = cad[len - 1 - i];
    }
    sub[len] = '\0';

    printf("Cadena copiada inversamente: %s\n", sub);
}
