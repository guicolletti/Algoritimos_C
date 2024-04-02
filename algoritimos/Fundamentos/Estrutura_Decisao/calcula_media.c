#include <stdio.h>
int main()
{
    float nota1 = 0;
    float nota = 0;

    printf("\nDigite a primeira nota do aluno: ");
    scanf("%f", &nota1 );

    printf("Agora, digite a segunda nota do aluno: ");
    scanf("%f", &nota );
    
    float media = nota1 + nota;
    float media_real = media / 2;
    
    if (media_real >= 6) {
        printf("\nParabens! Voce foi aprovado com a media: %.1f", media_real);
    } else {
        printf("Infelizmente, voce foi reprovado com a media: %.1f", media_real);
    }

    return 0;
}