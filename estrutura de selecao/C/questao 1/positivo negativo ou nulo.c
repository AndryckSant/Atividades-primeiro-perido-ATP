#include <stdio.h>

int main()
{
    float numero;

    printf("Digite aqui um número: ");
    scanf("%f", &numero);
    if (numero>0)
    {
        printf("Positivo");
    }
    else
    {
        if (numero<0)
        {
            printf("Negativo");
        }
        else
        {
            printf("Nulo");
        }
        
        
    }

    return 0;
}
