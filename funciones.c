#include <stdio.h>
#include "funciones.h"
#define ctdProduct 5
#define maxChar 50

int menuPrincipal()
{
    int opcion1;
    printf("1)Ver productos\n");
    printf("2)Añadir Productos\n");
    printf("3)Eliminar Productos\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion1);
    return opcion1;
}

void ingresarProductos(int *ids, char nombres[][maxChar], char descripciones[][maxChar], char marcas[][maxChar], int *cantidades, float *precios)
{

    printf("Ingresar datos para cada producto:\n");

    for (int i = 0; i < ctdProduct; i++)
    {
        printf("Producto %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &ids[i]);

        printf("Nombre: ");
        scanf("%s", nombres[i]);

        printf("Descripcion: ");
        scanf("%s", descripciones[i]);

        printf("Marca: ");
        scanf("%s", marcas[i]);

        printf("Cantidad: ");
        scanf("%d", &cantidades[i]);

        printf("Precio: ");
        scanf("%f", &precios[i]);

        printf("\n");
    }
}

void mostrarProductos(const int *ids, const char nombres[][maxChar], const char descripciones[][maxChar], const char marcas[][maxChar], const int *cantidades, const float *precios)
{
    printf("---------------------------------------------------------------\n");
    printf("Productos ingresados:\n");

    for (int i = 0; i < ctdProduct; i++)
    {
        printf("Producto %d:\n", i + 1);
        printf("ID: %d\n", ids[i]);
        printf("Nombre: %s\n", nombres[i]);
        printf("Descripcion: %s\n", descripciones[i]);
        printf("Marca: %s\n", marcas[i]);
        printf("Cantidad: %d\n", cantidades[i]);
        printf("Precio: %.2f\n", precios[i]);
        printf("\n");
    }
}

// int* ptr_ids[];
// char (*ptr_nombres[ctdProduct])[MAX_CHAR];
// char (*ptr_descripciones[NUM_PRODUCTOS])[MAX_CHAR];
// char (*ptr_marcas[NUM_PRODUCTOS])[MAX_CHAR];
// int* ptr_cantidades[NUM_PRODUCTOS];
// float *ptr_precios[NUM_PRODUCTOS];
