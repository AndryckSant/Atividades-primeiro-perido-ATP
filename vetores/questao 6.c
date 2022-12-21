#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade[30], indiceIdade, linhaNome= 0;
    int mediaIdade = 0;
    char nome[30][15];
    for (indiceIdade = 0; indiceIdade < 30; indiceIdade++)
    {
        printf("Digite seu nome: ");
        scanf(" %[^\n]s", nome[linhaNome]);
        linhaNome++;
        printf("Entre com a sua idade: ");
        scanf("%d", &idade[indiceIdade]);
        mediaIdade = mediaIdade + idade[indiceIdade];
        
    }
    mediaIdade = mediaIdade / indiceIdade;
    printf(" valor médio: %d\n\n", mediaIdade); 
    
    for (indiceIdade = 29; indiceIdade >= 0; indiceIdade--)
    {
        if (idade[indiceIdade]> mediaIdade)
        {
            printf("Nome: %s \nIdade: %d \n\n\n", nome, idade[indiceIdade]);    
        }
    }
    return 0;
}