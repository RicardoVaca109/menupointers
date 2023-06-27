#define ctdProduct 5
#define maxChar 50
int imprimirMenu();
void ingresarProductos(int *ids, char nombreSong[][maxChar], char generoSong[][maxChar], char album[][maxChar], int *integrantes, float *precioTick);
void mostrarProductos(int *ids,  char nombres[][maxChar], char descripciones[][maxChar], char marcas[][maxChar], int *cantidades, float *precios);
void mostrarProductostwo( int *ids,  char nombres[][maxChar],  char descripciones[][maxChar],  char marcas[][maxChar], int *cantidades,  float *precios);