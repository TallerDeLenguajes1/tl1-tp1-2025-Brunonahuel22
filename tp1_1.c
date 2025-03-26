#include <stdio.h>

int main()
{
    printf("Hola mundo\n");
    int numero = 5, *pnumero = &numero;

    printf("Contenido del puntero: %d\n", *pnumero);
    printf("Dirección de memoria almacenada por el puntero: %p\n", pnumero);
    printf("la dirección de memoria de la variable.: %p\n", &numero);
    printf("la dirección de memoria del puntero.: %p\n", &pnumero);

    printf("Tamaño de la variable numero: %d\n", sizeof(numero));

    return 0;
}