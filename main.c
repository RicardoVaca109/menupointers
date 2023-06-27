#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define ctdProduct 5
#define maxChar 50

int main (int argc, char *argv[]) {
    int opcion, continuar; // variables para el menu
    //char opcion2;

    int productTotal = 5; //variables quemadas del inventario

    int idq[ctdProduct]={1, 2, 3, 4, 5};
    char nombreq [ctdProduct][maxChar] = {{"Throne"}, {"Ecstasy"}, {"AmEN!"}, {"Loser"}, 
    {"Hypnosis"}};
    char generoq[ctdProduct][maxChar] = {{"Rock Alternativo"}, {"Rock"}, 
    {"Rock Alternativo"}, {"Rock"}, {"Metal Progresivo"}};
    char albumq[ctdProduct][maxChar] = {{"Thats the Spirit"}, {"Ecstasy"}, {"AmEN!"}, {"The Better Life"},
     {"This Place Will Become Your Tomb"}};
    int integrantesq[ctdProduct] = {7, 4, 7, 5, 4};
    float precioTickq[ctdProduct] = {35.9, 30.6 , 35.9, 24.9 , 45.8};

    //varibles para los productos que el ususario agrega
    int ids[ctdProduct]; 
    char nombreSong[ctdProduct][maxChar];
    char generoSong[ctdProduct][maxChar];
    char album[ctdProduct][maxChar];
    int integrantes [ctdProduct];
    float precioTickets [ctdProduct];

    while (continuar)
    {
        system("cls");
        opcion  = imprimirMenu();
        switch (opcion)
        {
        case 1:
            system("cls");
            mostrarProductos(idq,nombreq,generoq,albumq,integrantesq,precioTickq);
            break;
        case 2:
            system("cls");
            ingresarProductos(ids,nombreSong,generoSong,album,integrantes,precioTickets);
            break;
        case 3:
            system("cls");
            mostrarProductostwo(ids,nombreSong,generoSong,album,integrantes,precioTickets);
        default:
            break;
        }
    }
    

    



    //ingresarProductos(ids, nombreSong, generoSong, album, integrantes, precioTickets);
    //mostrarProductos(ids, nombreSong, generoSong, album, integrantes, precioTickets);
    //printf("%s is over %d years old.\n", NAME, AGE);
    return 0;
}