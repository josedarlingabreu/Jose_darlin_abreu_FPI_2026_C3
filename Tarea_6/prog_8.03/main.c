#include <stdio.h>
#include <string.h>

typedef struct
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion;
};

void Lectura(struct empleado *a);

void main(void)
{
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jeronimo", 120, 3490, "Toluca"}};
    struct empleado e1;

    Lectura(&e1);

    printf("\nDatos del Empleado 0:\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e0.nombre, e0.departamento, e0.sueldo,
           e0.direccion.calle, e0.direccion.numero, e0.direccion.cp, e0.direccion.localidad);

    printf("\nDatos del Empleado 1:\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1.nombre, e1.departamento, e1.sueldo,
           e1.direccion.calle, e1.direccion.numero, e1.direccion.cp, e1.direccion.localidad);
}

void Lectura(struct empleado *a)
{
    printf("Ingrese el nombre del empleado: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    a->nombre[strcspn(a->nombre, "\n")] = 0;

    printf("Ingrese el departamento: ");
    fgets(a->departamento, sizeof(a->departamento), stdin);
    a->departamento[strcspn(a->departamento, "\n")] = 0;

    printf("Ingrese el sueldo: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);

    printf("Ingrese la calle: ");
    fgets(a->direccion.calle, sizeof(a->direccion.calle), stdin);
    a->direccion.calle[strcspn(a->direccion.calle, "\n")] = 0;

    printf("Ingrese el numero: ");
    scanf("%d", &a->direccion.numero);

    printf("Ingrese el codigo postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);

    printf("Ingrese la localidad: ");
    fgets(a->direccion.localidad, sizeof(a->direccion.localidad), stdin);
    a->direccion.localidad[strcspn(a->direccion.localidad, "\n")] = 0;
}
