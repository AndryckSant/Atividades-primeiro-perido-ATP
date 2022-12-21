#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    switch (idade)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4: printf("Competidor muito jovem para as categorias. Espere alguns anos até poder competir.");
                break;
        case 5:
        case 6:
        case 7: printf("Categoria: Infantil A");
                break;
        case 8:
        case 9:
        case 10: printf("Categoria: Infantil B");
                 break;
        case 11:
        case 12:
        case 13: printf("Categoria: Juvenil A");
                 break;
        case 14:
        case 15:
        case 16:
        case 17: printf("Categoria: Juvenil B");
                break;
        case 18: printf("Categoria: Adulto");
                 break;
        default: printf("Categoria: Adulto");
                 break;
    }
    return 0;
}