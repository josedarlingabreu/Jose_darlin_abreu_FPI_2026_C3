#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char cad[50];
    int n, i = 0, count = 0;

    printf("Ingrese una palabra o frase: ");
    fgets(cad, sizeof(cad), stdin);

    printf("Ingrese el limite de posiciones a revisar: ");
    scanf("%d", &n);

    for (i = 0; i < n && cad[i] != '\0'; i++)
    {
        if (islower(cad[i]))
            count++;
    }

    printf("Se encontraron %d letras minusculas en las primeras %d posiciones.\n", count, n);
}
