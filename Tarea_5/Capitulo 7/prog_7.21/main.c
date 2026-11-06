#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad1[50], cad2[50];
    int res;

    printf("Ingrese la primera palabra: ");
    fgets(cad1, sizeof(cad1), stdin);
    printf("Ingrese la segunda palabra: ");
    fgets(cad2, sizeof(cad2), stdin);

    cad1[strcspn(cad1, "\n")] = 0;
    cad2[strcspn(cad2, "\n")] = 0;

    res = strcmp(cad1, cad2);

    if (res == 0)
        printf("Ambas palabras son identicas.\n");
    else if (res < 0)
        printf("'%s' va antes alfabeticamente que '%s'.\n", cad1, cad2);
    else
        printf("'%s' va antes alfabeticamente que '%s'.\n", cad2, cad1);
}
