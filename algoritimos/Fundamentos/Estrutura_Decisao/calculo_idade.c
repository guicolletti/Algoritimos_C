#include <stdio.h>
int main()
{
    float idade = 0;

    printf("\nPara comecarmos, digite sua idade: ");
    scanf("%f", &idade);

    if (idade >= 18)
    {
        printf("\nVoce e maior de idade, ja pode ser preso :D");
    } else {
        printf("Voce e menor de idade, volte ao seu roblox :(");    }

    return 0;
}
