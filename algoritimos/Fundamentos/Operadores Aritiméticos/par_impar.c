#include <stdio.h>
int main()
{
    int numero = 0;

    printf("Digite aqui o seu numero: ");
    scanf("%i", &numero);

    //Se o resto da divisão for 0, ele é par, por isso o "%"(módulo), logo, resto da divisão.

    if ( numero % 2 == 0)
    {
        printf("Seu numero e par!");

    } else {
        printf("Seu numero e impar!");
    }
    
    

    return 0;
}
