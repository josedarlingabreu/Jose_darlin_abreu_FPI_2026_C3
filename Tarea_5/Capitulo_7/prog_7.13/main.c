#include <stdio.h>
#include <string.h>

int Longitud(char *cadena);

void main(void)
{
    char cad[50];
    printf("Ingrese una frase: ");
    fgets(cad, sizeof(cad), stdin);

    cad[strcspn(cad, "\n")] = 0;

    printf("La longitud de la cadena es: %d caracteres.\n", Longitud(cad));
}

int Longitud(char *cadena)
{
    int i = 0;
    while (cadena[i] != '\0')
    {
        i++;
    }
    return i;
}
