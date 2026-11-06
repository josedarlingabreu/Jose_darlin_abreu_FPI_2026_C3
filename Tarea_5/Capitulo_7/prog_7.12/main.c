#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char cad[100];
    int i = 0, may = 0, min = 0;

    printf("Ingrese un texto: ");
    fgets(cad, sizeof(cad), stdin);

    while (cad[i] != '\0')
    {
        if (isupper(cad[i])) may++;
        if (islower(cad[i])) min++;
        i++;
    }

    printf("Mayusculas: %d | Minusculas: %d\n", may, min);
}
