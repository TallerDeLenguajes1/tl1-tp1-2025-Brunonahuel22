#include <stdio.h>

int NumeroCuadrado(int numero);
void NumeroCuadrado2(int numero);

int main()
{
   /*   funcion 1

    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("El cuadrado de %d es: %d", numero, NumeroCuadrado(numero));*/

    /*  funcion 2
    NumeroCuadrado2(4);*/

    



    return 0;
}

int NumeroCuadrado(int numero)
{
    return numero * numero;
}

void NumeroCuadrado2(int numero)
{
    printf("El cuadrado de %d es: %d", numero, numero * numero);  
}