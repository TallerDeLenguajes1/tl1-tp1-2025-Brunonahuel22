#include <stdio.h>

int NumeroCuadrado(int numero);
void NumeroCuadrado2(int numero);
void Invertir(int a, int b);



int main()
{
    int x, y;

   
    printf("Ingrese el primer valor (x): ");
    scanf("%d", &x);
    printf("Ingrese el segundo valor (y): ");
    scanf("%d", &y);

   
    printf("Cuadrado de %d: %d\n", x, NumeroCuadrado(x));
    NumeroCuadrado2(y);

    
    Invertir(x, y);

    
    Orden(&x, &y);
    printf("Valores ordenados: x = %d, y = %d\n", x, y);







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
