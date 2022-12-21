#include <stdio.h>

int main()
{
    int numero, menorNumero, maiorNumero = 0, contagemNumeros = 1;
    printf("Digite um número: ");
    scanf("%d", &numero);
    menorNumero = numero;

    do
    {
        contagemNumeros++;
        if (maiorNumero < numero)
        {
            maiorNumero = numero;
        }
        if (menorNumero > numero)
        {
            menorNumero = numero;
        }
        printf("Digite outro número: ");
        scanf("%d", &numero);
    } while (contagemNumeros <= 5);
    
    printf("Maior número digitado: %d \nMenor número digitado: %d \nÉ importante lembrar que o último número digitado não será levado em consideração", maiorNumero, menorNumero);
    return 0;
}