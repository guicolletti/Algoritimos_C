#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estrutura para representar um personagem
typedef struct {
    char nome[50];
    int vida;
    int ataque;
    int defesa;
    int experiencia;
} Personagem;

// Função para criar um novo personagem
Personagem criarPersonagem(char *nome) {
    Personagem jogador;
    strcpy(jogador.nome, nome);
    jogador.vida = 100;
    jogador.ataque = 10;
    jogador.defesa = 5;
    jogador.experiencia = 0;
    return jogador;
}

// Função para simular uma batalha entre o jogador e um inimigo
void batalhar(Personagem *jogador, Personagem *inimigo) {
    int danoJogador, danoInimigo;

    printf("Batalha contra %s!\n", inimigo->nome);

    // Simula os ataques
    danoJogador = rand() % jogador->ataque;
    danoInimigo = rand() % inimigo->ataque;

    // Aplica os danos
    jogador->vida -= danoInimigo;
    inimigo->vida -= danoJogador;

    // Exibe o resultado da batalha
    printf("%s sofreu %d de dano.\n", jogador->nome, danoInimigo);
    printf("%s sofreu %d de dano.\n", inimigo->nome, danoJogador);
}

int main() {
    srand(time(NULL));

    // Cria o jogador
    Personagem jogador = criarPersonagem("Herói");

    printf("Bem-vindo ao RPG!\n");
    printf("Seu personagem: %s\n", jogador.nome);
    printf("Vida: %d\n", jogador.vida);
    printf("Ataque: %d\n", jogador.ataque);
    printf("Defesa: %d\n", jogador.defesa);
    printf("Experiência: %d\n", jogador.experiencia);

    // Simula uma série de batalhas
    for (int i = 0; i < 5; i++) {
        Personagem inimigo = criarPersonagem("Monstro");
        batalhar(&jogador, &inimigo);

        // Verifica se o jogador foi derrotado
        if (jogador.vida <= 0) {
            printf("Você foi derrotado!\n");
            break;
        }

        // Adiciona experiência ao jogador
        jogador.experiencia += 10;

        printf("Você derrotou %s!\n", inimigo.nome);
        printf("Experiência ganha: 10\n");
        printf("Experiência total: %d\n", jogador.experiencia);
    }

    printf("Fim do jogo.\n");

    return 0;
}
