#include <stdio.h>

int main()
{
    char genero;

    printf("Digite o genero: ");
    scanf("%c", &genero);
    if (genero == 'f' || genero == 'F') 
    {
        printf("Feminino") ;
    }
    else 
    {
        if (genero == 'M' || genero == 'm')
        {
            printf("Masculino");
        }
        else
        {
            printf("Sexo inválido");
        }
    }
    return 0;
}