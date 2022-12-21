#include <stdio.h>

int main()
{
    float numero, fatorial;

    printf("Digite o número que você deseja calcular o fatorial: ");
    scanf("%f", &numero);
    fatorial = numero - 1;
    while (fatorial >  0)
    {
    numero = fatorial * numero;
    fatorial--;
    }
    
    printf("Resultado: %.0f", numero);
    return 0;
}