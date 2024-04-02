#include <stdio.h>

#define FRAMES 10

int main() {
    int score[FRAMES+1] = {0}; // Array para armazenar os pontos de cada frame
    int frame = 1;

    printf("Bem-vindo ao jogo de boliche!\n");

    while (frame <= FRAMES) {
        int roll1, roll2;
        printf("\nFrame %d\n", frame);

        // Primeiro arremesso
        printf("Arremesso 1: ");
        scanf("%d", &roll1);

        // Verifica se o valor do primeiro arremesso é válido
        if (roll1 < 0 || roll1 > 10) {
            printf("Valor inválido! Insira um valor entre 0 e 10.\n");
            continue;
        }

        // Se o primeiro arremesso não derrubou todos os pinos, faça o segundo arremesso
        if (roll1 < 10) {
            printf("Arremesso 2: ");
            scanf("%d", &roll2);

            // Verifica se o valor do segundo arremesso é válido
            if (roll2 < 0 || roll2 > (10 - roll1)) {
                printf("Valor inválido! Insira um valor entre 0 e %d.\n", (10 - roll1));
                continue;
            }
        } else {
            roll2 = 0; // Se o primeiro arremesso for um strike, o segundo arremesso é 0
        }

        // Calcula a pontuação para este frame
        score[frame] = roll1 + roll2;

        // Verifica se foi strike ou spare
        if (roll1 == 10) {
            printf("Strike!\n");
            frame++;
        } else if (roll1 + roll2 == 10) {
            printf("Spare!\n");
            frame++;
        } else {
            frame++;
        }
    }

    // Calcula a pontuação total
    int totalScore = 0;
    for (int i = 1; i <= FRAMES; i++) {
        totalScore += score[i];
    }

    printf("\nPontuação total: %d\n", totalScore);

    return 0;
}
