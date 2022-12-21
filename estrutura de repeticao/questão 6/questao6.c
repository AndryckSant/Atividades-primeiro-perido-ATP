#include <stdio.h>

int main(){

    int numero, divisor, numeroPrimo = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);
    for (divisor = 2; ((divisor < numero) && (numeroPrimo == 1)); divisor++)
    {
         if (numero % divisor == 0)
        {
            numeroPrimo = 0;
        }        
    }
    
    if (numeroPrimo == 0 || numero == 1 )
    {
        printf("%d não é primo!", numero);
    }
    else if (numeroPrimo == 1)
    {
        printf("%d é primo!", numero);
    }
        
        
    return 0;
}