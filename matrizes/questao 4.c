#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int matrizTridimensional[20][20][20];
    int contadorComprimento, contadorAltura, contadorProfundidade;
    printf("********** Onde a posição da profundidade é igual a [0], encontramos: *******\n");
    for(contadorProfundidade = 0; contadorProfundidade < 2; contadorProfundidade++)
    {
        for(contadorAltura = 0; contadorAltura < 4; contadorAltura++)
        {
            for(contadorComprimento = 0; contadorComprimento < 5; contadorComprimento++)
            {   
                if(contadorProfundidade == 0) {
                    matrizTridimensional[contadorComprimento][contadorAltura][contadorProfundidade] = random() % 99; 
                    printf("                            %d [%d][%d][%d]\n", matrizTridimensional[contadorComprimento][contadorAltura][0], contadorAltura, contadorComprimento, contadorProfundidade);      
                }
            }
        }
    }
  printf("********** Onde a posição da profundidade é igual a [1], encontramos: *******\n");
    for(contadorComprimento = 0; contadorComprimento < 5; contadorComprimento++)
    {
        for(contadorAltura = 0; contadorAltura < 4; contadorAltura++)
        {
            for(contadorProfundidade = 0; contadorProfundidade < 2; contadorProfundidade++)
            {
                if(contadorProfundidade == 1) {
                    matrizTridimensional[contadorComprimento][contadorAltura][contadorProfundidade] = random() % 98; 
                    printf("                            %d [%d][%d][%d]\n", matrizTridimensional[contadorComprimento][contadorAltura][1], contadorAltura, contadorComprimento, contadorProfundidade);    
                }           
            }
        }
    }
    return 0;
}