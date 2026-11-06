#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad[100];
    int i = 0, palabras = 0;

    printf("Ingrese una frase: ");
    fgets(cad, sizeof(cad), stdin);

    cad[strcspn(cad, "\n")] = 0;

    while (cad[i] != '\0')
    {
        if (cad[i] != ' ' && (cad[i + 1] == ' ' || cad[i + 1] == '\0'))
        {
            palabras++;
        }
        i++;
    }

    printf("La frase contiene %d palabras.\n", palabras);
}
