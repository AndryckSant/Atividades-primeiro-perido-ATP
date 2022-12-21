#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    if ((idade >= 5) && (idade <= 7))
    {
        printf("Categoria: Infantil A");
    }
    else
    {
        if ((idade > 7) && (idade <= 10)) 
        {
            printf("Categoria: Infantil B");
        }
        else
        {
            if ((idade > 10) && (idade <= 13))
            {
                printf("Categoria: Juvenil A");
            }
            else
            {
                if ((idade > 13) && (idade <= 17))
                {
                    printf("Categoria: Juvenil B");
                }
                else
                {
                    if (idade >= 18)
                    {
                        printf("Categoria: Adulto");
                    }
                    else
                    {
                        printf("Nadador muito jovem para competir. Espere alguns anos até tentar novamente.");
                    }
                }
            }
        }
    }
    return 0;
}