#include <stdio.h>

int main()
{
    float reais = 0;
    float dolar = 4.98;
    float cotacao = 0;
    char y[] = "Y";
    char n[] = "N";

    printf("digite quantos reais voce qer converter: ");
    scanf("%f", &reais);
    printf("voce sabe a cotacao do dolar?[Y/N]: ");
    if (scanf(" %c", &y)){
        printf("digite a cotacao do dolar: ");
        scanf("%f", &cotacao);
        dolar = reais / cotacao;
    } else if (scanf(" %c", &n)){
        dolar = reais / dolar;
        printf("com o valor do dolar sendo 4.98, voce tera %f$ apos a convercao", dolar);
    }
    
}