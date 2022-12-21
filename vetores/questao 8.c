#include <stdio.h>
#include <stdlib.h>
int main()
{
    int precoDosProdutos[5], quantidadeDeProdutos[5], indiceDosProduto, TotalDeVendasProduto[5], totalArrecadado = 0;
    for (indiceDosProduto = 0; indiceDosProduto < 5; indiceDosProduto++)
    {
        printf("Digite a quantidade de produtos vendidos: ");
        scanf("%d", &quantidadeDeProdutos[indiceDosProduto]);
        printf("Digite o preço do produto: ");
        scanf("%d", &precoDosProdutos[indiceDosProduto]);
    }
    for ( indiceDosProduto = 0; indiceDosProduto < 5; indiceDosProduto++)
    {
        TotalDeVendasProduto[indiceDosProduto] = precoDosProdutos[indiceDosProduto] * quantidadeDeProdutos[indiceDosProduto];
        printf("Valor arrecadado com o Produto %d: \nPreço do produto: %d  Quantidade de Produtos: %d  Total de vendas do produto: %d \n", indiceDosProduto, precoDosProdutos[indiceDosProduto], quantidadeDeProdutos[indiceDosProduto], TotalDeVendasProduto[indiceDosProduto]);
        totalArrecadado += TotalDeVendasProduto[indiceDosProduto];
    }
    printf("Total arrecadado: R$ %d", totalArrecadado);

    return 0;
}