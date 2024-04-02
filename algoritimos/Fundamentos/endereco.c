#include <stdio.h>

int main()
{
    char rua[] = "Godofredo Bulhoes Ferreira";
    char bairro[] = "Jardim Ibirapuera";
    char cidade[] = "Piracicaba";
    char complemento[] = "Portao Vermelho";
    char estado[] = "SP(Sao Paulo)";
    float cep = 13401.487;
    int numero = 215;
    
    printf("\n Moro na Rua: %s", rua);
    printf("\n O numero da minha casa e: %d", numero);
    printf("\n O complemento dela e: %s", complemento);
    printf("\n Ela fica no bairro: %s", bairro);
    printf("\n Moro na cidade de: %s", cidade);
    printf("\n Moro no estado de %s", estado);
    printf("\n Meu CEP e: %.3f", cep);

    return 0;
}
