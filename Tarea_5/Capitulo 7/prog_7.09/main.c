#include <stdio.h>

void main(void)
{
    char cad[50];
    char car;
    int i = 0, res = 0;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);

    printf("Ingrese el caracter a buscar: ");
    car = getchar();

    while (cad[i] != '\0')
    {
        if (cad[i] == car) res++;
        i++;
    }

    printf("El caracter '%c' aparece %d veces.\n", car, res);
}
