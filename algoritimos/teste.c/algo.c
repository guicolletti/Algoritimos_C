#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroAleatorio, palpite, tentativas = 0;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com o tempo atual

    numeroAleatorio = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100

    printf("Bem-vindo ao jogo de adivinhação de número!\n");
    printf("Tente adivinhar o número entre 1 e 100.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numeroAleatorio) {
            printf("Tente um número menor.\n");
        } else if (palpite < numeroAleatorio) {
            printf("Tente um número maior.\n");
        } else {
            printf("Parabéns! Você acertou o número %d em %d tentativas.\n", numeroAleatorio, tentativas);
        }

    } while (palpite != numeroAleatorio && tentativas < 7); // O jogador tem no máximo 7 tentativas

    if (tentativas >= 7 && palpite != numeroAleatorio) {
        printf("Você excedeu o número máximo de tentativas. O número correto era %d.\n", numeroAleatorio);
    }

    return 0;
}
