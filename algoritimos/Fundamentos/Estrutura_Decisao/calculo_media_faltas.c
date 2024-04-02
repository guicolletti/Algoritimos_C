#include <stdio.h>
int main()
{
    float nota1 = 0;
    float nota = 0;
    int faltas = 0;

    printf("\nDigite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Agora, digite a segunda nota do aluno: ");
    scanf("%f", &nota);

    printf("Por fim, digite o numero de faltas do aluno: ");
    scanf("%d", &faltas);

    float media = nota1 + nota;
    float media_real = media / 2;

    if (media_real >= 6 && faltas <= 4)
    {
        printf("\nParabens! Voce foi aprovado com a media: %.1f.", media_real);
    }
    else if (media_real < 6 && faltas > 4)
    {
        printf("\nInfelizmente, voce foi reprovado por falta de presencia e media %.1f", media_real);
    }
    else if (media_real < 6 && faltas <= 4)
    {
        printf("\nInfelizmente, voce foi reprovado por ter media %.1f.", media_real);
    }
    else if (media_real >= 6 && faltas > 4)
    {
        printf("Infelizmente, voce foi reprovado por %d faltas.", faltas);
    }

    return 0;
}