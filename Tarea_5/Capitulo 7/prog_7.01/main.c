#include <stdio.h>

void main(void)
{
    char p1 = 'a';
    printf("Caracter inicial: %c\n", p1);
    printf("Ingrese un nuevo caracter: ");
    p1 = getchar();
    fflush(stdin);
    printf("El caracter ingresado es: ");
    putchar(p1);
    printf("\n");
}
