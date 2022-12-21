#include <stdio.h>
int main()
{
    float numero;
    printf("Digite um número compreendido entre 0 e 100: ");
    scanf("%f", &numero);
    if ((numero > 0) && (numero < 100))
    {
        printf("O número %f está entre 0 e 100.", numero);
    }
    else
    { 
        printf("O numero %f não está entre 0 e 100", numero);
    }
    return 0;
}