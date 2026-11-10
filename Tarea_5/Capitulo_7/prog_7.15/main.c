#include <stdio.h>
#include <ctype.h>

void Interpretador(char *cadena);

void main(void)
{
    char cad[50];
    printf("Ingrese un texto a codificar: ");
    fgets(cad, sizeof(cad), stdin);

    Interpretador(cad);
    printf("Texto codificado: %s\n", cad);
}

void Interpretador(char *cadena)
{
    int i = 0;
    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i]))
        {
            cadena[i] = cadena[i] + 1;
        }
        i++;
    }
}
