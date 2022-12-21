#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorA[20], vetorB[20], indiceVetorA,indiceVetorB = 0;

    for (indiceVetorA = 0; indiceVetorA < 20; indiceVetorA++)
    {
        printf("Entre com o número: ");
        scanf("%d", &vetorA[indiceVetorA]);
    }
    for (indiceVetorA = 19; indiceVetorA >= 0; indiceVetorA--)
    {  
        indiceVetorB++;
        vetorB[indiceVetorB] = vetorA[indiceVetorA];
        printf("%d\n", vetorB[indiceVetorB]);
        
    }
    return 0;
}