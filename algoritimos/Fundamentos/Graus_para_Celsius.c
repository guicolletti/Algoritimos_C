#include <stdio.h>
int main()
{
    float CelcioPortioli = 0;

    printf("\n ---Ola! Sou sua maquina para conversao de Celsius para Fahrenheit---");

    printf("\n Para comercarmos, qual o valor em Celsius que voce quer converter? ");
    scanf("%f", &CelcioPortioli);

    float FarehitosFeiki = CelcioPortioli * 1.8;
    float FarehitosReal = FarehitosFeiki + 32;

    printf("\n Perfeito! Agora, espere um pouco por favor...");
    printf("\n O valor em Fahrenheit e igual a %.2f", FarehitosReal);

    return 0;
}

