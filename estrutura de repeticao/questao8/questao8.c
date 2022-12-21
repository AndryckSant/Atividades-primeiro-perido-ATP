#include <stdio.h>

int main()
{
    float altura, maiorAlturaTurma = 0, menorAlturaTurma= -5, mediaAlturaTurma = 0, mediaAlturaMulheres = 0;
    char sexo;
    float quantidadeDeAlunos, quantidadeDeMulheres = 0;

    for (quantidadeDeAlunos = 0; quantidadeDeAlunos < 50; quantidadeDeAlunos++)
    {
        printf("Digite o sexo do aluno(a): ");
        scanf(" %c", &sexo);
        printf("Digite a altura do aluno: ");
        scanf("%f", &altura);
        mediaAlturaTurma = mediaAlturaTurma + altura;
        if (menorAlturaTurma < 0)
        {
            menorAlturaTurma = altura;
        }
        
        if ((sexo == 'F') || (sexo == 'f'))
        {
            quantidadeDeMulheres++;
            mediaAlturaMulheres = mediaAlturaMulheres + altura;
        }
        if (menorAlturaTurma > altura)
        {
            menorAlturaTurma = altura;
        }
        if (maiorAlturaTurma < altura)
        {
            maiorAlturaTurma = altura;
        }
     
    }
    

    mediaAlturaTurma = mediaAlturaTurma/quantidadeDeAlunos;
    mediaAlturaMulheres = mediaAlturaMulheres/quantidadeDeMulheres;    
    printf("A maior altura da turma é: %.2f \nA menor altura da turma é: %.2f \nA altura média da turma é: %.2f \nA altura média das alunas de sexo feminino é: %.2f", maiorAlturaTurma, menorAlturaTurma, mediaAlturaTurma, mediaAlturaMulheres);    
    return 0;
}