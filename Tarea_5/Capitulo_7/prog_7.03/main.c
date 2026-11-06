#include <stdio.h>

void main(void)
{
    char cad0[20] = "Hola mundo";
    char cad1[20];

    printf("Cadena por defecto: %s\n", cad0);
    printf("Ingrese una cadena sin espacios: ");
    scanf("%s", cad1);
    printf("Cadena ingresada con scanf: %s\n", cad1);
}
