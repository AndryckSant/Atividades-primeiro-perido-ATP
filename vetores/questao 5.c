#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorA[20], vetorB[20], vetorSoma[20], indiceVetorA, indiceVetorB, indiceVetorSoma, igualdadeAB = 0;
    
    for ( indiceVetorA = 0; indiceVetorA < 20; indiceVetorA++)
    {
    printf("Entre com os elementos do vetor A: ");
    scanf("%d", &vetorA[indiceVetorA]);
    }
    for ( indiceVetorB = 0; indiceVetorB < 20; indiceVetorB++)
    {
        printf("Entre com os elementos do vetor B: ");
        scanf("%d", &vetorB[indiceVetorB]);
    }
    indiceVetorA = 0;
    indiceVetorB = 0;
    for ( indiceVetorSoma = 0; indiceVetorSoma < 20; indiceVetorSoma++)
    {
        vetorSoma[indiceVetorSoma] = vetorA[indiceVetorA] + vetorB[indiceVetorB];
        indiceVetorA++;
        indiceVetorB++;
        if (vetorA[indiceVetorA] == vetorB[indiceVetorB])
        {
            igualdadeAB++;
        }
        
    }
    for (indiceVetorSoma = 0; indiceVetorSoma < 20; indiceVetorSoma++)
    {
        printf("Posição: %d \nvetorA + vetorB: %d \n\n", indiceVetorSoma, vetorSoma[indiceVetorSoma]);
    }
    printf("Quantidade de vezes que os elementos de A e B foram iguais: %d", igualdadeAB);
    return 0; 
}