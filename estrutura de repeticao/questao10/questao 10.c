#include <stdio.h>

int main()
{
    float ladoDoQuadrado, baseDoRetangulo, alturaDoRetangulo, areaDoRetangulo, alturaDoTriangulo, baseDoTriangulo, areaDoTriangulo, areaDoCirculo, pi = 3.1415, raioDoCirculo;
    int menu;
    do
    {
        printf("Bem-vindo(a) à calculadora moderna! \nDigite a opção que deseja: \n1 - Calcular a área do quadrado \n2 - Calcular a área do retângulo \n3 - Calcular a área do triâgulo \n4 - Calcular a área do círculo \n5 - Sair do algoritmo \n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("Digite o valor do lado do quadrado: ");
            scanf("%f", &ladoDoQuadrado);
            ladoDoQuadrado = ladoDoQuadrado*ladoDoQuadrado;
            printf("A área do quadrado é: %.2f \n\n", ladoDoQuadrado);
            break;
        case 2:
            printf("Digite a altura do retângulo: ");
            scanf("%f", &alturaDoRetangulo);
            printf("Digite o tamanho da base do retângulo: ");
            scanf("%f", &baseDoRetangulo);
            areaDoRetangulo = (baseDoRetangulo * alturaDoRetangulo);
            printf("A área do retângulo é: %.2f \n\n", areaDoRetangulo);
            break;

           
        case 3:
            printf("Digite a altura do triângulo: ");
            scanf("%f", &alturaDoTriangulo);
            printf("Digite o tamanho da base: ");
            scanf("%f", &baseDoTriangulo);
            areaDoTriangulo = (baseDoTriangulo * alturaDoTriangulo) / 2;
            printf("A área do triângulo é: %.2f \n\n", areaDoTriangulo);
            break;
        
        case 4:
            printf("Digite o raio do círculo: ");
            scanf("%f", &raioDoCirculo);
            areaDoCirculo = ((raioDoCirculo * raioDoCirculo) * pi);
            printf("A área do círculo é de: %.2f \n\n", areaDoCirculo);
            break;
        
        case 5:
            printf("Volte sempre que precisar de ajuda nos cálculos! Até logo!");
            break;

        
        default:
            printf("Opção inválida! Tente novamente! \n\n");
            break;
        }
    } while (menu != 5);
    
    return 0;
}