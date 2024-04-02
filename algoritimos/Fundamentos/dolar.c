#include <stdio.h>
int main()
{
    float dolar = 4.95;
    float real = 0;

    printf("\n---Ola, sou seu convertor de dolar para real---");
    printf("\nPara comecar, qual a quantida em reais voce quer converter? ");
    scanf("%f", &real);

    float converzao = real / dolar;

    printf("\nPerfeito! O valor de rais em dolars e: %.2f", converzao);

    return 0;
}
