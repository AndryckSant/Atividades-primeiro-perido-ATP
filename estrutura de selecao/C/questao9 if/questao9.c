#include <stdio.h>

int main()
{
   float peso, gravidadeRelativa;
   int numeroDoPlaneta;

   printf("Digite o peso: ");
   scanf("%f", &peso);
   printf("Escolha um planeta: \n 1 - Mercúrio \n 2 - Vênus \n 3 - Marte \n 4 - Júpiter \n 5 - Saturno \n 6 - Urano \n");
   scanf("%d", &numeroDoPlaneta);
   if (numeroDoPlaneta == 1)
   {
      gravidadeRelativa = peso * 0.37;
      printf("Peso em Mercúrio: %f", gravidadeRelativa);
   }
   else
   {
      if (numeroDoPlaneta == 2)
      {
         gravidadeRelativa = peso * 0.88;
         printf("Peso em Vênus: %f", gravidadeRelativa);
      }
      else
      {
         if (numeroDoPlaneta == 3)
         {
            gravidadeRelativa = peso * 0.38;
            printf("Peso em Marte: %f", gravidadeRelativa);
         }
         else 
         {
            if (numeroDoPlaneta == 4)
            {
               gravidadeRelativa = peso * 2.64;
               printf("Peso em Júpiter: %f", gravidadeRelativa);
            }
            else
            {
               if (numeroDoPlaneta == 5)
               {
                  gravidadeRelativa = peso * 1.15;
                  printf("Peso em Saturno: %f", gravidadeRelativa);
               }
               else
               {
                  if (numeroDoPlaneta == 6)
                  {
                     gravidadeRelativa = peso * 1.17;
                     printf("Peso em Urano: %f", gravidadeRelativa);
                  }
                  else
                  {
                     printf("Número indicado não encontra-se na lista.");
                  }
               }

            }
         }
      }
   }
   return 0;

}