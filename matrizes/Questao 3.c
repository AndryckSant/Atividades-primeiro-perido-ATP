//Criar um programa que possa armazenar em uma matriz as
//alturas de dez atletas de cinco delegacoes que
//participarao dos jogos de verao. Imprimir a 
//maior altura de cada delegacao.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alturaDosAtletas[5][10], maiorAlturaDaDelegacao[5], indice, coluna;

    for ( indice = 0; indice < 5; indice++)
    {
        maiorAlturaDaDelegacao[indice] = 0;
        for (coluna = 0; coluna < 10; coluna++)
        {
            printf("Digite a altura do jogador: ");
            scanf(" %d", &alturaDosAtletas[indice][coluna]);
            if (alturaDosAtletas[indice][coluna] > maiorAlturaDaDelegacao[indice])
            {
                maiorAlturaDaDelegacao[indice] = alturaDosAtletas[indice][coluna];
            } 
        }
    }
    for ( indice = 0; indice < 5; indice++)
    {
        for ( coluna = 0; coluna < 10; coluna++)
        {
            printf("%d  ", alturaDosAtletas[indice][coluna]);
        }
        printf("\nmaiorAlturaDaDelegacao: %d", maiorAlturaDaDelegacao[indice]);
        printf("\n");
    }  
    return 0;
}