#include <stdio.h>
#include <string.h>
#include <ctype.h>

void EliminaEspacios(char *cadena);

void main(void)
{
    char cad[100];
    printf("Ingrese una frase con espacios: ");
    fgets(cad, sizeof(cad), stdin);

    EliminaEspacios(cad);
    printf("Frase sin espacios: %s\n", cad);
}

void EliminaEspacios(char *cadena)
{
    int i = 0, j = 0;
    while (cadena[i] != '\0')
    {
        if (cadena[i] != ' ')
        {
            cadena[j] = cadena[i];
            j++;
        }
        i++;
    }
    cadena[j] = '\0';
}
