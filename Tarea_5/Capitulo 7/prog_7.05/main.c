#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char cad0[] = "1234";
    char cad1[] = "12.34";
    int i;
    double d;

    i = atoi(cad0);
    d = atof(cad1);

    printf("Entero convertido (atoi): %d\n", i + 10);
    printf("Real convertido (atof): %.2f\n", d + 10.0);
}
