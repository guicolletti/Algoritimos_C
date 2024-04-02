#include <stdio.h>

int main()
{
    int idade = 15;
    float altura = 1.80;
    char *letra = "G";
    char nome[] = "Ganoel";

    printf("\n ---Meus Dados Pessoais---");
    printf("\n Meu nome: %s", nome);
    printf("\n Minha letra inicial: %s", letra);
    printf("\n Minha idade: %d", idade);
    printf("\n Minha altura: %f", altura);

    return 0;
}
