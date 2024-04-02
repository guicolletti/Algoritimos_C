#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char jogadaJogador, jogadaComputador;
    int resultado;
    
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com o tempo atual
    int escolhaComputador = rand() % 3; // 0: pedra, 1: papel, 2: tesoura

    printf("Bem-vindo ao jogo de Pedra, Papel e Tesoura!\n");
    printf("Escolha sua jogada (r para pedra, p para papel, t para tesoura): ");
    scanf(" %c", &jogadaJogador);

    // Convertendo a escolha do jogador para minúscula para facilitar a comparação
    jogadaJogador = tolower(jogadaJogador);

    // Convertendo a escolha do computador para caracter correspondente
    switch(escolhaComputador) {
        case 0:
            jogadaComputador = 'r';
            printf("O computador escolheu pedra.\n");
            break;
        case 1:
            jogadaComputador = 'p';
            printf("O computador escolheu papel.\n");
            break;
        case 2:
            jogadaComputador = 't';
            printf("O computador escolheu tesoura.\n");
            break;
    }

    // Determinando o resultado do jogo
    if (jogadaJogador == jogadaComputador) {
        printf("Empate!\n");
    } else if ((jogadaJogador == 'r' && jogadaComputador == 't') ||
               (jogadaJogador == 'p' && jogadaComputador == 'r') ||
               (jogadaJogador == 't' && jogadaComputador == 'p')) {
        printf("Voce venceu!\n");
    } else {
        printf("Você perdeu!\n");
    }

    return 0;
}
