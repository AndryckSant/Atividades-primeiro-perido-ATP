#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int indiceSexo = 0, LinhaNome;
    char nome[5][20], sexo[5][10];

    for (LinhaNome = 0; LinhaNome < 5; LinhaNome++)
    {
        printf("Digite seu nome: ");
        scanf(" %[^\n]s", nome[LinhaNome]);
        printf("Digite seu sexo (m/f): ");
        scanf(" %[^\n]s", sexo[indiceSexo]);
        indiceSexo++;
    }
    indiceSexo = 0;
    printf("Mulheres: \n");
    for (LinhaNome = 0; LinhaNome < 5; LinhaNome++)
    {
        if (strcmp ( sexo[indiceSexo], "f") == 0) 
        {
            printf("Nome: %s \nSexo: %s\n", nome[LinhaNome], sexo[indiceSexo]);
        }
        indiceSexo++;
    }
    indiceSexo = 0;
    printf("Homens: \n");
    for (LinhaNome = 0; LinhaNome < 5; LinhaNome++)
    {
        if (strcmp ( sexo[indiceSexo], "m") == 0) 
        {
            printf("Nome: %s \nSexo: %s\n", nome[LinhaNome], sexo[indiceSexo]);
        }
        indiceSexo++;
    }
    return 0;
}