#include <stdio.h>
int main()
{
    int temperatura = 0;
    
    printf("Digite a temperatura: ");
    scanf("%i", &temperatura);

    if (temperatura <= 13)
    {
        printf("Caramba! Que frio...");
    } else if (temperatura >13 && temperatura <= 25)
    {
        printf("Wow, esta bem agradavel...");
    } else if (temperatura <= 32 && temperatura >25)
    {
        printf("Fusso, que calor");
    } else if (temperatura > 32)
    {
        printf("Mas que desgraca, ta calor pra burro!");
    } 
    

    return 0;
}

