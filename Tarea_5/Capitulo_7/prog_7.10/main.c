#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char cad[20];
    int i = 0;
    float sum = 0.0;

    printf("Ingrese una cifra decimal: ");
    fgets(cad, sizeof(cad), stdin);

    while (cad[0] != '\n')
    {
        sum += atof(cad);
        i++;
        printf("Ingrese otra cifra (o Presione ENTER para terminar): ");
        fgets(cad, sizeof(cad), stdin);
    }

    printf("Suma total de los %d numeros: %.2f\n", i, sum);
}
