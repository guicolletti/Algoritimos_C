#include <stdio.h>
int main()
{
    float Pseudomino = 0;
    float TorreEifel = 0;

    printf("\n---Ola, sou sua calculador de IMC---");
    printf("\nPrimeiro, qual o seu peso em kilos? ");
    scanf("%f", &Pseudomino);

    printf("\nAgora, qual a sua altura em metros? (exemplo: 1.85): ");
    scanf("%f", &TorreEifel);

    float Torre = TorreEifel * TorreEifel;
    float IMC = Pseudomino / Torre;

    if (IMC < 18.5)
    {
        printf("\nCuidado! voce esta *Abaixo do Peso*");
    } else if (IMC < 24.9 && IMC > 18.5)
    {
        printf("\nParabens! voce esta com o *Peso Saudavel*");
    } else if (IMC < 30 && IMC > 25)
    {
        printf("\nCuidado! voce esta *Obeso*");
    } else if (IMC < 39.9 && IMC > 30.1)
    {
        printf("\nCuidado! Voce esta *Obeso Morbido*");
    }
    

    return 0;
}
