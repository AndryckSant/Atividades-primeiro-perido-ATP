#include <stdio.h>

int main()
{
    int numero, quantidadeDeNumeros = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);
    while (numero > 0)
    {
        quantidadeDeNumeros += 1;
        printf("Digite outro número: ");
        scanf("%d", &numero);
        
    }
    printf("quantidade de números digitados: %d", quantidadeDeNumeros);
       
    return 0;
}