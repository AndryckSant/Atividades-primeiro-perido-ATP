#include <stdio.h>
int main()
{
    float salarioBruto, valorDaPrestacao, valorMaximoDaPrestacao;
    printf("Digite o salário bruto: ");
    scanf("%f", &salarioBruto);
    printf("Digite o Valor da Prestação: ");
    scanf("%f", &valorDaPrestacao);
    valorMaximoDaPrestacao = (salarioBruto*0.3);
    if (valorDaPrestacao <= valorMaximoDaPrestacao)
    {
        printf("Crédito concedido!");
    }
    else
    {
        printf("Crédito negado!");
    }
    return 0;
}