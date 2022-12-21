#include <stdio.h>
#include <stdlib.h>

int main() {
    struct vetores
    {
        int vetorPreco[20], vetorQuantidade[20], vetorValorArrecadado[20];
    };
    struct vetores preco, quantidade, valorArrecadado;
    int contador, valorTotalArrecadado = 0;
    for(contador = 0; contador <= 499; contador++) 
    {
        printf("Entre com o preço do produto %d: ", contador + 1);
        scanf("%d", &preco.vetorPreco[contador]);
        printf("Entre com a quantidade de vezes que esse produto foi vendido: ");
        scanf("%d", &quantidade.vetorQuantidade[contador]);
        valorArrecadado.vetorValorArrecadado[contador] = preco.vetorPreco[contador] * quantidade.vetorQuantidade[contador];
        valorTotalArrecadado += valorArrecadado.vetorValorArrecadado[contador];
    }
    for(contador = 0; contador <= 499; contador++)
    {   
        printf("Produto %d arrecadou: %d reais.\n", contador + 1, valorArrecadado.vetorValorArrecadado[contador]);     
    }
    printf("O valor total arrecado é de: %d reais.", valorTotalArrecadado);
    return 0;
}