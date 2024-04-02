#include <stdio.h>

int main()
{
    printf("\n ---Calcular Nota do Aluno---");

    int prova1 = 0;
    int prova2 = 0;

    printf("\n Digite aqui a nota da primeira prova:");
    scanf("%d", &prova1);

    printf("\n Digite aqui a nota da segunda prova:");
    scanf("%d", &prova2);

    float soma = prova1 + prova2;
    float media = soma / 2;

    printf("\n Perfeito! A media e: %.2f", media);

    return 0;
}
