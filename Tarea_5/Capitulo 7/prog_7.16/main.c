#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad[50], sub[20];
    char *ptr;
    int res = 0;

    printf("Ingrese el texto principal: ");
    fgets(cad, sizeof(cad), stdin);

    printf("Ingrese la subcadena a buscar: ");
    fgets(sub, sizeof(sub), stdin);

    cad[strcspn(cad, "\n")] = 0;
    sub[strcspn(sub, "\n")] = 0;

    ptr = strstr(cad, sub);
    while (ptr != NULL)
    {
        res++;
        ptr = strstr(ptr + 1, sub);
    }

    printf("La subcadena '%s' se repite %d veces.\n", sub, res);
}
