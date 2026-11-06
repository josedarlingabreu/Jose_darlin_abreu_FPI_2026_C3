#include <stdio.h>

/* Primos en un rango: almacena en un arreglo unidimensional los números primos. */

void Primos(int VEC[], int *T, int N);
void Imprime(int VEC[], int T);

void main(void)
{
    int ARRE[100], TAM = 0, LIMITE;

    printf("Ingrese hasta que numero desea buscar primos: ");
    scanf("%d", &LIMITE);

    Primos(ARRE, &TAM, LIMITE);

    printf("\n--- Numeros Primos Encontrados ---\n");
    Imprime(ARRE, TAM);
}

void Primos(int VEC[], int *T, int N)
{
    int I, J, ES_PRIMO;
    *T = 0;
    for (I = 2; I <= N; I++)
    {
        ES_PRIMO = 1;
        for (J = 2; J * J <= I; J++)
        {
            if (I % J == 0)
            {
                ES_PRIMO = 0;
                break;
            }
        }
        if (ES_PRIMO)
        {
            VEC[*T] = I;
            (*T)++;
        }
    }
}

void Imprime(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("%d ", VEC[I]);
    printf("\n");
}
