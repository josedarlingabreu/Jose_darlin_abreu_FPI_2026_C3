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

void main(void)
{
    struct alumno a1 = {120, "Maria", "Contabilidad", 8.9, "Queretaro"};
    struct alumno a2, a3;

    printf("Ingrese la matricula del alumno 2: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 2: ");
    fgets(a2.nombre, sizeof(a2.nombre), stdin);
    a2.nombre[strcspn(a2.nombre, "\n")] = 0;

    printf("Ingrese la carrera del alumno 2: ");
    fgets(a2.carrera, sizeof(a2.carrera), stdin);
    a2.carrera[strcspn(a2.carrera, "\n")] = 0;

    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);

    printf("Ingrese la direccion del alumno 2: ");
    fgets(a2.direccion, sizeof(a2.direccion), stdin);
    a2.direccion[strcspn(a2.direccion, "\n")] = 0;

    a3.matricula = 125;
    strcpy(a3.nombre, "Pedro");
    strcpy(a3.carrera, "Ingenieria");
    a3.promedio = 9.2;
    strcpy(a3.direccion, "Santo Domingo");

    printf("\nDatos del Alumno 1:\n");
    printf("%d | %s | %s | %.2f | %s\n", a1.matricula, a1.nombre, a1.carrera, a1.promedio, a1.direccion);

    printf("\nDatos del Alumno 2:\n");
    printf("%d | %s | %s | %.2f | %s\n", a2.matricula, a2.nombre, a2.carrera, a2.promedio, a2.direccion);

    printf("\nDatos del Alumno 3:\n");
    printf("%d | %s | %s | %.2f | %s\n", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);
}
