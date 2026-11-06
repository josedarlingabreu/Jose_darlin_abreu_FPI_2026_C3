#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(void)
{
    char cad[50];
    int i = 0, may = 0, min = 0;

    printf("Ingrese una frase: ");
    fgets(cad, sizeof(cad), stdin);

    while (cad[i] != '\0')
    {
        if (islower(cad[i])) min++;
        else if (isupper(cad[i])) may++;
        i++;
    }

    printf("Mayusculas: %d\nMinusculas: %d\n", may, min);
}
