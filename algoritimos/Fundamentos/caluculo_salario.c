#include <stdio.h>
int main()
{
    float salario_antigo = 0;
    float porcentagem = 0;
    printf("\n---Calculando Novo Salario---");
    printf("\nQual seu salario atual? ");
    scanf("%f", &salario_antigo);
    printf("Perfeito! Agora, qual a porcentagem do seu aumento? ");
    scanf("%f", &porcentagem);
    if (scanf("%f", &porcentagem > 49))
    {
        float porcentagem49 = porcentagem / 100;
        float alguma_coisa = porcentagem49 * salario_antigo;
        float novo_salario = salario_antigo + alguma_coisa;
        printf("Incrivel! Seu salario e de %f", novo_salario);
    } else {
        float porcentagem48 = porcentagem / 100;
        float alguma_coisa_dois = porcentagem48 * salario_antigo;
        float novo_salario_dois = salario_antigo + alguma_coisa_dois;
        printf("Incrivel! Seu salario e de %f", novo_salario_dois);
    }
    
    return 0;
}
