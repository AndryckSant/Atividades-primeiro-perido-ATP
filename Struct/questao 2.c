#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    struct vetores
    {
        char nome[200][100], sexo[200][10];
    };
    struct vetores nome, sexo;
    int contador;
    for(contador = 0; contador <= 199; contador++)
    {
        printf("Entre com o nome: ");
        scanf(" %[^\n]s", nome.nome[contador]);
        printf("Entre com o sexo(Masculino ou Feminino): ");
        scanf(" %[^\n]s", sexo.sexo[contador]);
    }
    printf("***** Os nomes femininos são: *****\n");
    for(contador = 0; contador <= 199; contador++)
    {
        if((strcmp(sexo.sexo[contador], "Feminino") == 0) || (strcmp(sexo.sexo[contador], "feminino") == 0)) {
            printf("            %s\n", nome.nome[contador]);
        }
    }
    printf("***** Os nomes masculinos são: *****\n");
    for(contador = 0; contador <= 199; contador ++)
    {
        if((strcmp(sexo.sexo[contador], "Masculino") == 0) || (strcmp(sexo.sexo[contador], "masculino") == 0)) {
            printf("            %s\n", nome.nome[contador]);
        }
    }
    return 0;
}