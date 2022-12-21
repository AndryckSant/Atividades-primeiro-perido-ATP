#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[7], vetorB[7], matrizC[7][2], indice, colunas;
    for ( indice = 0; indice < 7; indice++)
    {
        printf("Entre com o elemento de A: ");
        scanf("%d", &vetorA[indice]);
        printf("Entre com o elemento de B: ");
        scanf("%d", &vetorB[indice]);
        matrizC[indice][0] = vetorA[indice];
        matrizC[indice][1] = vetorB[indice];
    }
    for ( indice = 0; indice < 7; indice++)
    {
        for (colunas = 0; colunas < 2; colunas++)
        {
            printf("%d  ", matrizC[indice][colunas]);    
        }
        printf("\n");        
    }
    return 0;
}