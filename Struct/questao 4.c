#include<stdio.h>
#include<stdlib.h>

int main() {
    struct vetores 
    {
        int idade[10];    
        char nome[30][100];
    };
    struct vetores idade, nome;
    int contador, mediaIdade = 0, idadeEntrada;
    
    for(contador = 0; contador <= 29; contador++) 
    {
        printf("Entre com o nome: ");
        scanf(" %[^\n]s", nome.nome[contador]);
        printf("Entre com a idade: ");
        scanf("%d", &idadeEntrada);
        idade.idade[contador] = idadeEntrada;
        mediaIdade += idadeEntrada;
    }  
    mediaIdade = mediaIdade / contador;
    printf("O nome das pessoas que ficaram acima da média de Idade: \n");  
    for(contador = 0; contador <= 29; contador++) 
    {
        if(idade.idade[contador] > mediaIdade) {
          printf("%s\n", nome.nome[contador]);
        }
    }
    return 0;
}