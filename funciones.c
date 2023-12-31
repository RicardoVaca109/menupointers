#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int imprimirMenu()
{
    int opcion;
    printf("---------------INVENTARIO CANCIONES---------------\n");
    printf("Men%c inventario\n", 163);
    printf("Seleccione una opci%cn: \n", 162);
    printf("1) Ver productos\n");
    printf("2) Ingreso de producto\n");
    // printf("\t3) Modificar productos\n");
    printf("3) Modificar un producto\n");
    printf("4) Eliminar Productos de Inventario\n");
    printf("5) Salir\n");
    printf("Selecione una opcion: ");
    scanf("%d", &opcion);
    return opcion;
}
void siguiente()
{
    printf("Presione una tecla para continuar:");
    getch();
}
void modificarProducto(int identificacion[10], char nombre[][50], char descripcion[][50],
                      char marcas[][50], int cantidades[10], float precios[10])
{
    int id;
    printf("---- Modificar Producto ----\n");
    printf("Ingrese el Id del producto a modificar: ");
    scanf("%i", &id);
    printf("Nombre de Canci%cn: ", 162);
    scanf(" %[^\n]s", nombre[id - 1]);
    printf("Genero: ");
    scanf(" %[^\n]s", descripcion[id - 1]);
    printf("Album: ");
    scanf(" %[^\n]s", marcas[id - 1]);
    printf("Integrantes:");
    scanf("%d", &cantidades[id - 1]);
    printf("Nuevo Precio de Tickets: ");
    scanf("%f", &precios[id - 1]);
}
void leerProducto(int identificacion[10], char nombre[][50], char descripcion[][50],char unidades[][50], int cantidad[10],  float precio[10], int tot)
{
    int opciones;
    printf("---- Ingresar Producto ----\n");
    printf("Nombre: ");
    scanf(" %[^\n]s", nombre[tot]);

    printf("Genero: ");
    scanf(" %[^\n]s", descripcion[tot]);

    printf("Album: ");
    scanf(" %[^\n]s", unidades[tot]);

    printf("Integrantes:");
    scanf("%d", &cantidad[tot]);

    printf("Precio Tickets: ");
    scanf("%f", &precio[tot]);

    printf("El identificador del nuevo producto es: 000%i\n", tot + 1);
    identificacion[tot] = tot + 1;
    siguiente();
}
void imprimirProductos(int identificacion[10], char nombre[][50], char descripcion[][50],char unidades[][50], int cantidad[10], int totals, float precio[10])
{
    printf("ID\t Nombre\t Genero\t         Album\t            Integrantes\t         Precio Tickets\n");
    //int total;
    for (int i = 0; i < totals; i++)
    {
        
        printf("000%i\t %s\t %s\t\t  %s\t\t %d\t\t %.2f\n", identificacion[i], nombre[i], descripcion[i],
               unidades[i], cantidad[i], precio[i]);
    }
    siguiente();
}
void eliminarProducto(int identificacion[10], char nombre[][50], char descripcion[][50],char unidades[][50], int cantidad[10],  float precio[10], int tot)
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
                strcpy(unidades[j], unidades[j + 1]);
                cantidad[j] = cantidad[j + 1];
                precio[j] = precio[j + 1];
            }
        }
    }
}
