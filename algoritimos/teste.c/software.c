#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pedido {
    int numeroPedido;
    char modeloVinho[50];
    char nomeCliente[50];
    int quantidade;
    int notaFiscal;
    float valorTotal;
};

struct Transporte {
    char cepRemetente[10];
    char cepDestinatario[10];
    float distanciaTerrestre;
    float distanciaAerea;
    int usarCaminhao;
    int usarAviao;
};

struct Saida {
    int numeroPedido;
    char dataHoraSaida[20];
    char nomeTransportadora[50];
    char nomeMotorista[50];
    int numeroPicking;
    int entregue;
};

struct Historico {
    int numeroPedido;
    int cancelado;
};

void telaInicial() {
    printf("Bem-vindo ao sistema de expedicao!\n");
    printf("Selecione uma opcao:\n");
    printf("1. Pedidos\n");
    printf("2. Dados de Transporte\n");
    printf("3. Dados de Saida\n");
    printf("4. Base de Dados\n");
    printf("5. Historico\n");
}

void dadosPedido(struct Pedido pedido) {
    printf("Numero do Pedido: %d\n", pedido.numeroPedido);
    printf("Modelo do Vinho: %s\n", pedido.modeloVinho);
    printf("Nome do Cliente: %s\n", pedido.nomeCliente);
    printf("Quantidade: %d\n", pedido.quantidade);
    printf("Nota Fiscal: %d\n", pedido.notaFiscal);
    printf("Valor Total: %.2f\n", pedido.valorTotal);
}

void dadosTransporte(struct Transporte transporte) {
    printf("CEP Remetente: %s\n", transporte.cepRemetente);
    printf("CEP Destinatario: %s\n", transporte.cepDestinatario);
    printf("Distancia Terrestre: %.2f km\n", transporte.distanciaTerrestre);
    printf("Distancia Aerea: %.2f km\n", transporte.distanciaAerea);
    printf("Usar Caminhao: %s\n", transporte.usarCaminhao ? "Sim" : "Nao");
    printf("Usar Aviao: %s\n", transporte.usarAviao ? "Sim" : "Nao");
}

void dadosSaida(struct Saida saida) {
    printf("Numero do Pedido: %d\n", saida.numeroPedido);
    printf("Data e Hora de Saida: %s\n", saida.dataHoraSaida);
    printf("Nome da Transportadora: %s\n", saida.nomeTransportadora);
    printf("Nome do Motorista: %s\n", saida.nomeMotorista);
    printf("Numero de Picking: %d\n", saida.numeroPicking);
    printf("Entregue: %s\n", saida.entregue ? "Sim" : "Nao");
}

void historico(struct Historico historico) {
    printf("Numero do Pedido: %d\n", historico.numeroPedido);
    printf("Cancelado: %s\n", historico.cancelado ? "Sim" : "Nao");
}

int main() {
    int opcao;
    
    telaInicial();
    
    printf("Selecione uma opcao: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            // Exibir tela de dados do pedido
            break;
        case 2:
            // Exibir tela de dados de transporte
            break;
        case 3:
            // Exibir tela de dados de saida
            break;
        case 4:
            // Exibir base de dados
            break;
        case 5:
            // Exibir tela de historico
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
