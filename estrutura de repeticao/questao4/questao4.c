#include <stdio.h>

int main()
{
    int numero, contagemPares=0, contagemImpares=0, mediaPares= 0, mediaImpares = 0, maiorPar = 0, menorImpar= -99;
    
    printf("Digite um número positivo: ");
    scanf("%d", &numero);
        
    menorImpar = numero;
    

    while (numero >= 0)
    {
        if ((numero > 0) && (numero % 2 == 0))
        {
            contagemPares++;
            mediaPares += numero; 
            if (numero > maiorPar)
            {
               maiorPar = numero; 
            }
           
        }
        else
        {
            
            if ((numero > 0) && (numero % 2 != 0))
            {
                if (menorImpar < 0);
                {
                    menorImpar = numero;
                }
                
                contagemImpares++;
                mediaImpares += numero;
                if (menorImpar > numero)
                {
                    menorImpar = numero;
                }
     
            }

        }

    printf("Digite um número positivo: ");
    scanf("%d", &numero);        
    } 
    mediaImpares = mediaImpares/contagemImpares;
    mediaPares = mediaPares/contagemPares;
    printf("O maior número par é: %d \nMédia dos números pares é: %d \n", maiorPar, mediaPares);
    printf("O menor número Ímpar: %d \nMédia dos números ímpares é: %d", menorImpar, mediaImpares);
    return 0;
}