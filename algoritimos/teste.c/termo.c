#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define NUM_PALAVRAS 55
#define TAMANHO_MAXIMO 20

char palavras[NUM_PALAVRAS][TAMANHO_MAXIMO] = {
    "elefante",
    "banana",
    "programacao",
    "computador",
    "abacaxi",
    "cachorro",
    "gato",
    "mouse",
    "teclado",
    "cadeira",
    "mesa",
    "chave",
    "porta",
    "janela",
    "aviao",
    "carro",
    "bicicleta",
    "livro",
    "caneta",
    "caderno",
    "aprendizado",
    "escola",
    "professor",
    "aluno",
    "calendario",
    "religiao",
    "igreja",
    "biblia",
    "amor",
    "familia",
    "amizade",
    "saude",
    "coracao",
    "pulmao",
    "felicidade",
    "tristeza",
    "esperanca",
    "desespero",
    "sabedoria",
    "ignorancia",
    "computacao",
    "algoritmo",
    "programador",
    "desenvolvimento",
    "linguagem",
    "compilador",
    "interpretador",
    "variavel",
    "funcao",
    "estrutura",
    "ponteiro",
    "array"
};

char* escolherPalavra() {
    srand(time(NULL));
    int indice = rand() % NUM_PALAVRAS;
    return palavras[indice];
}

void converterParaMinusculas(char *palavra) {
    for (int i = 0; palavra[i]; i++) {
        palavra[i] = tolower(palavra[i]);
    }
}

int letraNaPalavra(char letra, char *palavra) {
    for (int i = 0; palavra[i]; i++) {
        if (palavra[i] == letra) {
            return 1;
        }
    }
    return 0;
}

void atualizarPalavraEscondida(char *palavra, char *palavraEscondida, char letra) {
    for (int i = 0; palavra[i]; i++) {
        if (palavra[i] == letra) {
            palavraEscondida[i] = letra;
        }
    }
}

int main() {
    char *palavra = escolherPalavra();
    converterParaMinusculas(palavra);

    char palavraEscondida[TAMANHO_MAXIMO];
    for (int i = 0; palavra[i]; i++) {
        palavraEscondida[i] = '_';
    }
    palavraEscondida[strlen(palavra)] = '\0';

    printf("Bem-vindo ao jogo de Adivinhacao de Palavras!\n");
    printf("Tente adivinhar a palavra secreta.\n");

    while (1) {
        printf("Palavra secreta: %s\n", palavraEscondida);

        char palpite;
        printf("Digite uma letra: ");
        scanf(" %c", &palpite);
        palpite = tolower(palpite);

        if (!isalpha(palpite)) {
            printf("Por favor, insira apenas letras do alfabeto.\n");
            continue;
        }

        if (letraNaPalavra(palpite, palavra)) {
            printf("A letra '%c' esta na palavra!\n", palpite);
            atualizarPalavraEscondida(palavra, palavraEscondida, palpite);

            if (strcmp(palavraEscondida, palavra) == 0) {
                printf("Parabens! Voce adivinhou a palavra corretamente: %s\n", palavra);
                break;
            }
        } else {
            printf("A letra '%c' nao esta na palavra.\n", palpite);
        }
    }

    return 0;
}
