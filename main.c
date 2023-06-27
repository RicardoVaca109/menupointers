#include <stdio.h>
#include "funciones.h"
#define ctdProduct 5
#define maxChar 50
int main (int argc, char *argv[]) {
    int ids[ctdProduct];
    char nombre[ctdProduct][maxChar];
    char descrip [ctdProduct][maxChar];
    char marcas [ctdProduct][maxChar];
    int cantidades [ctdProduct];
    float precios [ctdProduct];

    printf("*********BIENVENIDO AL INVENTARIO***********\n");
    printf("Que desea hacer?\n");



    ingresarProductos(ids, nombre, descrip, marcas, cantidades, precios);
    mostrarProductos(ids, nombre, descrip, marcas, cantidades, precios);
    //printf("%s is over %d years old.\n", NAME, AGE);
    return 0;
}