#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM_POKEMONS 3

typedef struct {
    char nome[50];
    int vida;
    int ataque;
    int defesa;
    int experiencia;
    int nivel;
} Personagem;

typedef struct {
    char nome[20];
    int nivel;
    int vida;
    int ataque;
    int defesa;
} Pokemon;

Personagem criarPersonagem(char *nome) {
    Personagem jogador;
    strcpy(jogador.nome, nome);
    jogador.vida = 100;
    jogador.ataque = 10;
    jogador.defesa = 5;
    jogador.experiencia = 0;
    jogador.nivel = 1;
    return jogador;
}

Pokemon criarPokemon(char *nome, int nivel, int vida, int ataque, int defesa) {
    Pokemon novoPokemon;
    strcpy(novoPokemon.nome, nome);
    novoPokemon.nivel = nivel;
    novoPokemon.vida = vida;
    novoPokemon.ataque = ataque;
    novoPokemon.defesa = defesa;
    return novoPokemon;
}

Pokemon encontrarPokemonSelvagem() {
    Pokemon pokemonsSelvagens[NUM_POKEMONS] = {
        criarPokemon("Charmander", 5, 50, 10, 5),
        criarPokemon("Bulbasaur", 5, 50, 10, 5),
        criarPokemon("Squirtle", 5, 50, 10, 5)
    };

    int indicePokemon = rand() % NUM_POKEMONS;
    return pokemonsSelvagens[indicePokemon];
}

void batalhar(Personagem *jogador, Pokemon *pokemon) {
    int danoJogador, danoPokemon;

    printf("Batalha contra %s!\n", pokemon->nome);

    danoJogador = rand() % jogador->ataque;
    danoPokemon = rand() % pokemon->ataque;

    jogador->vida -= danoPokemon;
    pokemon->vida -= danoJogador;

    printf("%s sofreu %d de dano.\n", jogador->nome, danoPokemon);
    printf("%s sofreu %d de dano.\n", pokemon->nome, danoJogador);
}

void verificarNivel(Personagem *jogador) {
    if (jogador->experiencia >= jogador->nivel * 50) {
        jogador->nivel++;
        jogador->vida += 20;
        jogador->ataque += 5;
        jogador->defesa += 2;
        printf("Parabéns! Você avançou para o nível %d!\n", jogador->nivel);
    }
}

int main() {
    srand(time(NULL));

    Personagem jogador = criarPersonagem("Herói");

    printf("Bem-vindo ao RPG!\n");
    printf("Seu personagem: %s\n", jogador.nome);
    printf("Vida: %d\n", jogador.vida);
    printf("Ataque: %d\n", jogador.ataque);
    printf("Defesa: %d\n", jogador.defesa);
    printf("Experiência: %d\n", jogador.experiencia);
    printf("Nível: %d\n", jogador.nivel);

    for (int i = 0; i < 5; i++) {
        Pokemon pokemonSelvagem = encontrarPokemonSelvagem();
        printf("Um Pokemon selvagem apareceu!\n");
        printf("Você encontrou um %s!\n", pokemonSelvagem.nome);

        while (jogador.vida > 0 && pokemonSelvagem.vida > 0) {
            batalhar(&jogador, &pokemonSelvagem);
        }

        if (jogador.vida <= 0) {
            printf("Você foi derrotado!\n");
            break;
        }

        jogador.experiencia += 20;
        verificarNivel(&jogador);

        printf("Você derrotou %s!\n", pokemonSelvagem.nome);
        printf("Experiência ganha: 20\n");
        printf("Experiência total: %d\n", jogador.experiencia);
        printf("Vida restante: %d\n", jogador.vida);
        printf("Nível: %d\n", jogador.nivel);
    }

    printf("Fim do jogo.\n");

    return 0;
}
