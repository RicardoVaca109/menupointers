#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define ctdProduct 5
#define ingProduct 5
#define maxChar 50

int imprimirMenu()
{
    int opcion;
    printf("---------------Bienvenido---------------\n");
    printf("Men%c de la herramienta de inventario\n", 163);
    printf("Seleccione una opci%cn: \n", 162);
    printf("\t1) Ver productos\n");
    printf("\t2) Ingreso de producto\n");
    // printf("\t3) Modificar productos\n");
    printf("\t3) Ver productos Ingresados\n");
    printf("\t4) Eliminar Productos de Inventario original\n");
    printf("\t5) Eliminar Productos de Inventario agregado\n");
    printf("\t6) Salir\n");
    printf("Selecione una opcion: ");
    scanf("%d", &opcion);
    return opcion;
}
void siguiente()
{
    printf("Presione una tecla para continuar:");
    getch();
}
void mostrarProductos( int *ids,  char nombres[][maxChar],  char descripciones[][maxChar],  char marcas[][maxChar],  int *cantidades,  float *precios)
{
    printf("---------------------------------------------------------------\n");
    printf("Productos en Inventario:\n");
    for (int i = 0; i < ctdProduct; i++)
        {
        printf("Producto %d:\n", i + 1);
        printf("ID: %d\n", ids[i]);
        printf("Nombre de Cancion: %s\n", nombres[i]);
        printf("Genero: %s\n", descripciones[i]);
        printf("Album: %s\n", marcas[i]);
        printf("Integrantes: %d\n", cantidades[i]);
        printf("Precio Tickets: %.2f\n", precios[i]);
        printf("\n");
        
        }
    siguiente();
}

void ingresarProductos(int *ids, char nombreSong[][maxChar], char generoSong[][maxChar], char album[][maxChar], int *integrantes, float *precioTick)
{

    printf("Ingresar datos para cada producto:\n");

    for (int i = 0; i < ingProduct; i++)
    {
        printf("Producto %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &ids[i]);

        printf("Nombre de la Cancion: ");
        scanf("%s", nombreSong[i]);

        printf("Genero: ");
        scanf("%s", generoSong[i]);

        printf("Album: ");
        scanf("%s", album[i]);

        printf("Integrantes: ");
        scanf("%d", &integrantes[i]);

        printf("Precio Tickets: ");
        scanf("%f", &precioTick[i]);

        printf("\n");
        
    }
    siguiente();
}

void mostrarProductostwo( int *ids,  char nombres[][maxChar],  char descripciones[][maxChar], char marcas[][maxChar],  int *cantidades,  float *precios)
{
    printf("***************************************************************\n");
    printf("Productos ingresados:\n");

    for (int i = 0; i < ingProduct; i++)
    {
        printf("Producto %d:\n", i + 1);
        printf("ID: %d\n", ids[i]);
        printf("Nombre de Cancion: %s\n", nombres[i]);
        printf("Genero: %s\n", descripciones[i]);
        printf("Album: %s\n", marcas[i]);
        printf("Integrantes: %d\n", cantidades[i]);
        printf("Precio Tickets: %.2f\n", precios[i]);
        printf("\n");
        
    }
    siguiente();
    
}
/*
void eliminarProducto(int identificacion[10], char nombre[10][10], char descripcion[10][15],
                      float cantidad[10], char unidades[10][10], float precio[10], int tot, float preciot[10])
{
    int id;
    printf("---- Eliminar Producto ----\n");
    printf("Ingrese el ID del producto a eliminar: ");
    scanf("%d", &id);
    for (int i = 0; i < tot; i++)
    {
        if (identificacion[i] == id)
        {
            for (int j = i; j < tot - 1; j++)
            {
                identificacion[j] = identificacion[j + 1];
                strcpy(nombre[j], nombre[j + 1]);
                strcpy(descripcion[j], descripcion[j + 1]);
                cantidad[j] = cantidad[j + 1];
                strcpy(unidades[j], unidades[j + 1]);
                precio[j] = precio[j + 1];
            }
        }
    }
    preciot[id - 1] = 0;
}
*/