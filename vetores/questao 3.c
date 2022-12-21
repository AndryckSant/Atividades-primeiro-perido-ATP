#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[5];
    int linhaDoNumero, maiorNumero = 0;
    for (linhaDoNumero = 0; linhaDoNumero < 5; linhaDoNumero++)
    {
        printf("Entre com o número: ");
        scanf("%d", &numero[linhaDoNumero]);
        if(maiorNumero < numero[linhaDoNumero])
        {
            maiorNumero = numero[linhaDoNumero];
        }
    }    
    for (linhaDoNumero = 4; linhaDoNumero >= 0; linhaDoNumero--)
    {
        if (numero[linhaDoNumero] == maiorNumero)
        {
            printf("numero: %d\n", numero[linhaDoNumero]);
            printf("Posição: %d\n", linhaDoNumero);
            printf("Posição na memória: %x\n\n\n", numero[linhaDoNumero]);
                
        }
    }
    return 0;
}