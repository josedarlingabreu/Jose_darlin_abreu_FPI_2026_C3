#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char p1;
    printf("Ingrese un caracter: ");
    p1 = getchar();

    if (isalpha(p1))
    {
        if (islower(p1))
            printf("Es una letra minuscula. En mayuscula es: %c\n", toupper(p1));
        else
            printf("Es una letra mayuscula. En minuscula es: %c\n", tolower(p1));
    }
    else if (isdigit(p1))
    {
        printf("Es un digito numerico.\n");
    }
    else
    {
        printf("Es un caracter especial o simbolo.\n");
    }
}
