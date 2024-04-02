#include <stdio.h>
int main()
{
    int numeroMes = 0;

    printf("Digite o numero do mes: ");
    scanf("%i", &numeroMes);

    switch (numeroMes)
    {
    case 1:
        printf("Estamos no mes de Janeiro");
        break;
    case 2:
        printf("Estamos no mes de Fevereiro");
        break;
    case 3:
        printf("Estamos no mes de Marco");
        break;
    case 4:
        printf("Estamos no mes de Abril");
        break;
    case 5:
        printf("Estamos no mes de Maio");
        break;
    case 6:
        printf("Estamos no mes de Junho");
        break;
    case 7:
        printf("Estamos no mes de Julho");
        break;
    case 8:
        printf("Estamos no mes de Agosto");
        break;
    case 9:
        printf("Estamos no mes de Setembro");
        break;
    case 10:
        printf("Estamos no mes de Outubro");
        break;
    case 11:
        printf("Estamos no mes de Novembro");
        break;
    case 12:
        printf("Estamos no mes de Dezembro");
        break;
                                       
    default:
        printf("Voce nao vai quebrar este codigo hehehe");
        break;
    }

    return 0;
}
