#include <stdio.h>

int main()
{
    float  operacao, conta = 0;
    int menu;

    do
    {
        printf("Bem-vindo(a) ao sistema virtual mágico do Banco de Gringotes! \nSelecione a operação que deseja realizar abaixo: \n1 - Depósito \n2 - Retirada \n3 - Consultar Saldo \n4 - Sair do programa: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("Digite o valor do Depósito: ");
            scanf("%f", &operacao);
            conta += operacao;
            break;
        case 2:
            printf("Digite o valor do saque: ");
            scanf("%f", &operacao);
            if (operacao > conta)
            {
                printf("Valor de saque excede a quantia presente na conta! \n\n");
            }
            else
            {
                conta -= operacao;
            }
            
            break;
        case 3:
            printf("Seu Saldo em conta é de: R$ %.2f \n", conta);
            break;
        case 4: 
        printf("Muito obrigado por usar o gringotes! Volte sempre!!! \n\n");
        break;
            
        
        default:
            printf("Opção inválida! Tente novamente!\n\n\n");
            break;
        }
        
    } while (menu != 4);
    return 0;
}