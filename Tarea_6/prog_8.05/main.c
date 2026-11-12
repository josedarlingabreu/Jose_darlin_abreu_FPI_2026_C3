#include <stdio.h>
#include <string.h>

union datos
{
    char celular[15];
    char correo[20];
};

typedef struct
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;

void Lectura(alumno *a);

void main(void)
{
    alumno a1 = {120, "Maria", "Contabilidad", 8.9, {"55-1234-5678"}};
    alumno a2;

    Lectura(&a2);

    printf("\nDatos del Alumno 1:\n");
    printf("%d | %s | %s | %.2f | Celular: %s\n", a1.matricula, a1.nombre, a1.carrera, a1.promedio, a1.personales.celular);

    printf("\nDatos del Alumno 2:\n");
    printf("%d | %s | %s | %.2f | Correo: %s\n", a2.matricula, a2.nombre, a2.carrera, a2.promedio, a2.personales.correo);
}

void Lectura(alumno *a)
{
    printf("Ingrese la matricula: ");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    a->nombre[strcspn(a->nombre, "\n")] = 0;
    printf("Ingrese la carrera: ");
    fgets(a->carrera, sizeof(a->carrera), stdin);
    a->carrera[strcspn(a->carrera, "\n")] = 0;
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese el correo electronico: ");
    fgets(a->personales.correo, sizeof(a->personales.correo), stdin);
    a->personales.correo[strcspn(a->personales.correo, "\n")] = 0;
}
