#include <stdio.h>
#include <stdlib.h>

int main() {

    char nomePessoas[5][30];
    int linha;
    for (linha = 0; linha < 5; linha++)
    {
        printf("Digite seu nome: ");
        scanf(" %[^\n]s", nomePessoas[linha]);
    }
    printf("Nomes armazenados: ");
    for ( linha = 5; linha >= 0; linha--)
    {
        printf("Nome: %s \n", nomePessoas[linha]);
    }
    
    
    return 0;
}