#include<stdio.h>
#include<stdlib.h>

int main() {
    struct matriz
    {
        float altura[5][10];
    };
    struct matriz altura;
    float maiorAltura[5];
    int linha, coluna;
    printf("\n\t\tDigite a altura dos atletas: \n");
    for(linha = 0; linha < 5; linha++)
    {   
        maiorAltura[linha] = 0;
        for(coluna = 0; coluna < 10; coluna++) {
            printf("A altura do atleta %d e de delegação %d é: \n", coluna + 1, linha + 1);
            scanf("%f", &altura.altura[linha][coluna]);
            if(maiorAltura[linha] < altura.altura[linha][coluna]) {
                maiorAltura[linha] = altura.altura[linha][coluna];
            }
        }
    }
    for(linha = 0; linha < 5; linha++)
    {
        printf("Maior altura do atleta da %dª delegação é: %.2f.\n", linha + 1, maiorAltura[linha]);
    }
    return 0;
}