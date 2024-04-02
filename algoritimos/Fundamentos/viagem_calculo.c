#include <stdio.h>

int main()
{
    
    printf("---Calculo de Gasto de Combustivel---");

    //Variáveis:
    float distancia = 0;
    float medialitro = 0;
    float litrodisel = 5.85;
    float litrogaso = 5.58;
    float litroetanol = 3.42;
    char disel[] = "disel";
    char etanol[] = "etanol";
    char gasolina[] = "gasolina";

    printf("\nQual a distancia em quilometros que sera percorrida? ");
    scanf("%f", &distancia);
    printf("\nQuantos km/h seu carro anda por litro? ");
    scanf("%f", &medialitro);
    printf("\nPerfeito. Agora, voce usa gasolina, etanol ou disel? ");
    if (scanf("%s", &disel))
    {
        float calculo_disel = (distancia / medialitro) * litrodisel;

        printf("\nPronto! O valor que sera gasto e de %.2f", calculo_disel);

    } 
    if (scanf("%s", &etanol))
    {
        float calculo_etanol = (distancia / medialitro) * litroetanol;

        printf("\nPronto! O valor que sera gasto e de %.2f", calculo_etanol);

    } 
    if (scanf("%s", &gasolina))
    {
        float calculo_gasolina = (distancia / medialitro) * litrogaso;

        printf("\nPronto! O valor que sera gasto e de %.2f", calculo_gasolina);
    }
    
    return 0;
}