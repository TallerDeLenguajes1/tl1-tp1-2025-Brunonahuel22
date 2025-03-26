#include <stdio.h>

int NumeroCuadrado(int numero);

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("El cuadrado de %d es: %d", numero, NumeroCuadrado(numero));

    return 0;
}

int NumeroCuadrado(int numero)
{
    return numero * numero;
}