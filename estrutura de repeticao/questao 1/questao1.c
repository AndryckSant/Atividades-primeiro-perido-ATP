#include <stdio.h>

int main()
{
    int numero, soma = 0, numerosNegativos = 0, contador = 0;
    
    do
    {
        printf("Digite um número: ");
        scanf("%d", &numero);
        if (numero > 0)
        {
        soma += numero;
        }
        
        if (numero < 0)
        {
            numerosNegativos += 1;
        }
        
        
        contador++;
    } while (contador < 20);
    
    printf("Soma dos positivos digitados: %d \n", soma);
    printf("Quantidade de números negativos digitados:  %d", numerosNegativos);
    return 0; 
}