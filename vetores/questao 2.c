#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[200];
    int media = 0, linhaDoNumero;
    for (linhaDoNumero = 0; linhaDoNumero < 200; linhaDoNumero++)
    {
        printf("Entre com o número: ");
        scanf("%d", &numero[linhaDoNumero]);
        media = media + numero[linhaDoNumero];
    }
    media = media / linhaDoNumero;
    printf(" valor médio: %d\n\n", media); 
    
    for (linhaDoNumero = 199; linhaDoNumero >= 0; linhaDoNumero--)
    {
        if (numero[linhaDoNumero]>= media)
        {
            printf("número acima da média: %d \nPosição do número: %d \n\n\n", numero[linhaDoNumero], linhaDoNumero);    
        }
    }
    return 0;
}