#include <stdio.h>
#include <math.h>

int main()
{
    
    printf("\n ---Calcular Area do Circulo---");

    float raio = 0;
    float PI = M_PI;

    printf("\n Digite aqui o raio do circulo: ");
    scanf("%f", &raio);

    float area = PI * pow(raio, 2.0);

    printf("\n Perfeito! A area e: %.2f", area);


    return 0;
}