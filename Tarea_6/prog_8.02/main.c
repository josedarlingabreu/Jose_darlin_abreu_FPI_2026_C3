#include <stdio.h>
#include <string.h>

struct alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

void Lectura(struct alumno *a);

void main(void)
{
    struct alumno a0 = {120, "Maria", "Contabilidad", 8.9, "Queretaro"};
    struct alumno *a3, *a4, a5;

    a3 = &a0;

    a4 = &a5;
    Lectura(a4);

    printf("\nDatos del alumno 3 (por apuntador):\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion);

    printf("\nDatos del alumno 4 (leido por apuntador):\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);
}

void Lectura(struct alumno *a)
{
    printf("Ingrese la matricula: ");
    scanf("%d", &(*a).matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    a->nombre[strcspn(a->nombre, "\n")] = 0;
    printf("Ingrese la carrera: ");
    fgets((*a).carrera, sizeof((*a).carrera), stdin);
    (*a).carrera[strcspn((*a).carrera, "\n")] = 0;
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese la direccion: ");
    fgets(a->direccion, sizeof(a->direccion), stdin);
    a->direccion[strcspn(a->direccion, "\n")] = 0;
}
