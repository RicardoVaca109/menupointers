#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main (int argc, char *argv[]) {
    int opcion, continuar; 

    int ctdcanciones= 5; //variables quemadas del inventario

    int idq[10]={1,2,3,4,5};
    char nombreq [10][50] = {{"Throne"},{"Hell"},{"AmEN!"},{"Loser"}, 
    {"Euclid"}};
    char generoq[10][50] = {{"Rock"},{"Rock"},{"Rock"}, {"Rock"},{"Metal"}};
    char albumq[10][50] = {{"Spirit"},{"Ecstasy"},{"AmEN!!!"},{"BetLife"},
     {"UrTomb"}};
    int integrantesq[10] = {7,4,7,5,4};
    float precioTickq[10] = {35.9,30.6,35.9,24.9,45.8};

    while (continuar)
    {
        system("cls");
        opcion  = imprimirMenu();
        switch (opcion)
        {
        case 1:
            system("cls");
            imprimirProductos(idq,nombreq,generoq,albumq,integrantesq,ctdcanciones,precioTickq);
            break;
        case 2:
            system("cls");
            leerProducto(idq,nombreq,generoq,albumq,integrantesq,precioTickq, ctdcanciones);
            ctdcanciones++;
            break;
        case 3:
            system("cls");
            modificarProducto(idq,nombreq,generoq,albumq,integrantesq,precioTickq);
            break;
        case 4:
            system("cls");
            eliminarProducto(idq,nombreq,generoq,albumq,integrantesq,precioTickq,ctdcanciones);
            ctdcanciones--;

            break;
        case 5:
            printf("Saliendo........\n");
            continuar = 0;
            break;
        }
    }
    
    return 0;
}