#include <stdio.h>

int NumeroCuadrado(int numero);
void NumeroCuadrado2(int numero);
void Invertir(int a, int b);



int main()
{
   /*   funcion 1

    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("El cuadrado de %d es: %d", numero, NumeroCuadrado(numero));*/

    /*  funcion 2
    NumeroCuadrado2(4);*/


   /*int variable = 6;

    printf("Contenido: %d\n",variable);
    printf("Direccion de memoria: %p\n",&variable);*/ 







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

void Invertir(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Valor de a: %d",a);
    printf("Valor de b: %d",b);
}

void Orden(int *a,int *b){
    int temp = 0;
    if (*a >= *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    
}
