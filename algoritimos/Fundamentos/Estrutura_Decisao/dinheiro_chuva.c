#include <stdio.h>
int main()
{
    int resposta1 = 0;
    int resposta2 = 0;

    printf("Voce tem dinheiro? (1 para Sim, e 2 para Nao): ");
    scanf("%d", &resposta1);

    printf("Esta chovendo? (1 para Sim, e 2 para Nao): ");
    scanf("%d", &resposta2);

    if (resposta1 == 1 && resposta2 == 1)
    {
        printf("Infelizmente, esta chovendo, logo nao iremos tomar sorvete.");
    }
    else if (resposta1 == 1 && resposta2 == 2)
    {
        printf("Incrivel, temos dinheiro e nao esta chovendo, logo iremos tomar sorvete.");
    }
    else if (resposta1 == 2 && resposta2 == 2)
    {
        printf("Infelizmente, estamos sem dinheiro, logo nao iremos tomar sorvete.");
    }
    else if (resposta1 == 2 && resposta2 == 1)
    {
        printf("Infelizmente, estamos sem dinheiro e esta chovendo, logo nao iremos tomar sorvete.");
    }

    return 0;
}
