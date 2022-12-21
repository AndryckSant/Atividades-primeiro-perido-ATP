#include <stdio.h>
int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero%3 == 0)
    {
        printf("É múltiplo de 3");
    }
    else
    {
        printf("Não é múltiplo de 3");
    }
    return 0;
}