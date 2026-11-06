#include <stdio.h>

/* Arreglo sin elementos repetidos: elimina los números duplicados de un vector. */

void Lectura(int VEC[], int T);
int EliminaDuplicados(int VEC[], int T);
void Imprime(int VEC[], int T);

void main(void)
{
    int ARRE[20], N, NUEVO_T;

    printf("Ingrese la cantidad de elementos (max 20): ");
    scanf("%d", &N);

    Lectura(ARRE, N);
    NUEVO_T = EliminaDuplicados(ARRE, N);

    printf("\n--- Arreglo sin Duplicados ---\n");
    Imprime(ARRE, NUEVO_T);
}

void Lectura(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese elemento %d: ", I + 1);
        scanf("%d", &VEC[I]);
    }
}

int EliminaDuplicados(int VEC[], int T)
{
    int I, J, K;
    for (I = 0; I < T; I++)
    {
        for (J = I + 1; J < T; )
        {
            if (VEC[I] == VEC[J])
            {
                for (K = J; K < T - 1; K++)
                    VEC[K] = VEC[K + 1];
                T--;
            }
            else
                J++;
        }
    }
    return T;
}

void Imprime(int VEC[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("%d ", VEC[I]);
    printf("\n");
}
