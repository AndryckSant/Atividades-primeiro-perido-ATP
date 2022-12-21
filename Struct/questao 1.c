#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main() {
    struct tipoPonto
    {
        int coordenadaX;
        int coordenadaY;
    };
    struct tipoPonto inicial, final;
    float distancia, soma1, soma2;
    printf("Entre com as coordenadas iniciais para x e y(respectivamente): ");
    scanf("%d%d", &inicial.coordenadaX, &inicial.coordenadaY);
    printf("Entre com as coordenadas finais para x e y(respectivamente): ");
    scanf("%d%d", &final.coordenadaX, &final.coordenadaY);
    soma1 = pow(final.coordenadaX - inicial.coordenadaX, 2);
    soma2 = pow(final.coordenadaY - inicial.coordenadaY, 2);
    distancia = sqrt(soma1 + soma2);
    printf("\nA distância é: %.3f\n", distancia);
    return 0;
}