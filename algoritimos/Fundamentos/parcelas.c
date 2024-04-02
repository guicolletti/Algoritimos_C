#include <stdio.h>
int main()
{
    int Parzelas = 0;
    float Moneys = 0;

    printf("\n---Ola, sou sua calculadora de preco por parcelas---");
    printf("\nPrimeiro, qual o valor do produto? ");
    scanf("%f", &Moneys);
    printf("\nAgora, em quantas parcelas ele sera parcelado? ");
    scanf("%d", &Parzelas);
    printf("\nPerfeito! Aguarde um momento.");

    float parcela = Moneys / Parzelas;

    printf("\nPronto, o produto sera pago em %d meses", Parzelas);
    printf("\nO valor a ser pago por mes e de: R$%2.f", parcela);

    return 0;
}
