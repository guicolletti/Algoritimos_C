#include <stdio.h>
int main()
{
    int numeroMes = 0;

    printf("Digite o numero do mes: ");
    scanf("%i", &numeroMes);

    if (numeroMes == 1)
    {
        printf("Estamos no mes de Janeiro, com muito calor");
    } else if (numeroMes == 2)
    {
        printf("Estamos no mes de Fevereiro, com alguma coisa ai");
    } else if (numeroMes == 3)
    {
        printf("Estamos no mes de Marco, com muitas desgracas acontecendo");
    } else if (numeroMes == 4)
    {
        printf("Estamos no mes de Abril, com meu aniversario :D");
    } else if (numeroMes == 5)
    {
        printf("Estamos no mes de Maio, com muito desgosto");
    } else if (numeroMes == 6)
    {
        printf("Estamos no mes de Junho, com muito desprezo");
    } else if (numeroMes == 7)
    {
        printf("Estamos no mes de Julho, com muita tristeza");
    } else if (numeroMes == 8)
    {
        printf("Estamos no mes de Agosto, com muito desespero");
    } else if (numeroMes == 9)
    {
        printf("Estamos no mes de Setembro, com muitas explosoes");
    } else if (numeroMes == 10)
    {
        printf("Estamos no mes de Outubro, o mes dos desastres naturais");
    } else if (numeroMes == 11)
    {
        printf("Estamos no mes de Novembro, com muita depressao");
    } else if (numeroMes == 12)
    {
        printf("Estamos no mes de Dezembro, com muita felicidade");
    } else if (numeroMes > 12)
    {
        printf("Com todo respeito, voce e burro?");
    } else if (numeroMes < 1)
    {
        printf("Voce nao vai quebrar esse codigo.");
    } 

    return 0;
}