#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad[100];
    int i = 0, len = 0, max_len = 0;

    printf("Ingrese un texto: ");
    fgets(cad, sizeof(cad), stdin);
    cad[strcspn(cad, "\n")] = 0;

    while (cad[i] != '\0')
    {
        if (cad[i] != ' ')
        {
            len++;
        }
        else
        {
            if (len > max_len) max_len = len;
            len = 0;
        }
        i++;
    }
    if (len > max_len) max_len = len;

    printf("La longitud de la palabra mas larga es: %d letras.\n", max_len);
}
