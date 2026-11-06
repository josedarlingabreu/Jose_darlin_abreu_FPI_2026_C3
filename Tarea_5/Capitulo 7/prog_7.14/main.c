#include <stdio.h>
#include <string.h>

void Invertir(char *cadena);

void main(void)
{
    char cad[50];
    printf("Ingrese una palabra: ");
    fgets(cad, sizeof(cad), stdin);

    cad[strcspn(cad, "\n")] = 0;

    Invertir(cad);
    printf("Cadena invertida: %s\n", cad);
}

void Invertir(char *cadena)
{
    int i, j, len;
    char temp;

    len = strlen(cadena);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = temp;
    }
}
