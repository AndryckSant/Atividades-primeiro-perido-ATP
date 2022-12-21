#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[5][3], matrizB[5][3], matrizC[5][3], indiceMatrizes, colunaMatrizes;

    for ( indiceMatrizes = 0; indiceMatrizes < 5; indiceMatrizes++)
    {
        for ( colunaMatrizes = 0; colunaMatrizes < 3; colunaMatrizes++)
        {
        printf("Digite o elemento para A: ");
        scanf(" %d", &matrizA[indiceMatrizes][colunaMatrizes]);
        printf("Digite o elemento para B: ");
        scanf(" %d", &matrizB[indiceMatrizes][colunaMatrizes]);
        matrizC[indiceMatrizes][colunaMatrizes] = matrizA[indiceMatrizes][colunaMatrizes] + matrizB[indiceMatrizes][colunaMatrizes];
        }      
    }
    for ( indiceMatrizes = 0; indiceMatrizes < 5; indiceMatrizes++)
    {
        for ( colunaMatrizes = 0; colunaMatrizes < 3; colunaMatrizes++)
        {
            printf("%d  ", matrizC[indiceMatrizes][colunaMatrizes]);
        } 
        printf("\n");
    }
    
    
    return 0;
}