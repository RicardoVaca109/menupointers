#define ctdProduct 5
#define maxChar 50
int menuPrincipal();
void ingresarProductos(int *ids, char nombres[][maxChar], char descripciones[][maxChar], char marcas[][maxChar], int *cantidades, float *precios);
void mostrarProductos(const int *ids, const char nombres[][maxChar],const char descripciones[][maxChar], const char marcas[][maxChar], const int *cantidades, const float *precios);
