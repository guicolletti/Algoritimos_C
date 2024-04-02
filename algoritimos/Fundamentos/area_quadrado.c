#include <stdio.h>

int main()
{
    
    printf("\n ---Calcular Area do Quadrado---");

    float lado = 0;

    printf("\n Digite aqui o lado do quadrado: ");
    scanf("%f", &lado);

    float area = lado * lado;

    printf("\n Perfeito! A area e: %.2f", area);


    return 0;
}
