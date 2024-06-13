#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo as structs para voos e passageiros
typedef struct {
    char* origem;
    char* destino;
    char* data;
    char* horario;
    int assentos_disponiveis;
} Voo;

typedef struct {
    char* nome;
    char* documento;
} Passageiro;

// Função para consultar voos disponíveis
void consultarVoos(Voo** voos, int total_voos) {
    printf("\nVoos Disponíveis:\n");
    for (int i = 0; i < total_voos; i++) {
        printf("Voo %d: Origem - %s, Destino - %s, Data - %s, Horário - %s, Assentos Disponíveis - %d\n",
               i + 1, voos[i]->origem, voos[i]->destino, voos[i]->data, voos[i]->horario,
               voos[i]->assentos_disponiveis);
    }
}

// Função para realizar reserva de passagem
void reservarPassagem(Voo** voos, Passageiro** passageiros, int* total_reservas, int total_voos) {
    int voo_selecionado;
    printf("Selecione o voo desejado (1-%d): ", total_voos);
    scanf("%d", &voo_selecionado);

    if (voo_selecionado < 1 || voo_selecionado > total_voos) {
        printf("Voo selecionado inválido.\n");
        return;
    }

    if (voos[voo_selecionado - 1]->assentos_disponiveis == 0) {
        printf("Não há assentos disponíveis para este voo.\n");
        return;
    }

    Passageiro* novo_passageiro = (Passageiro*) malloc(sizeof(Passageiro));
    if (novo_passageiro == NULL) {
        printf("Erro ao alocar memória para o passageiro.\n");
        return;
    }

    novo_passageiro->nome = (char*) malloc(50 * sizeof(char));
    if (novo_passageiro->nome == NULL) {
        printf("Erro ao alocar memória para o nome do passageiro.\n");
        free(novo_passageiro);
        return;
    }

    novo_passageiro->documento = (char*) malloc(20 * sizeof(char));
    if (novo_passageiro->documento == NULL) {
        printf("Erro ao alocar memória para o documento do passageiro.\n");
        free(novo_passageiro->nome);
        free(novo_passageiro);
        return;
    }

    printf("Digite seu nome: ");
    scanf("%s", novo_passageiro->nome);

    printf("Digite seu número de documento: ");
    scanf("%s", novo_passageiro->documento);

    passageiros[*total_reservas] = novo_passageiro;

    voos[voo_selecionado - 1]->assentos_disponiveis--;
    (*total_reservas)++;

    printf("Reserva realizada com sucesso para o voo %d.\n", voo_selecionado);

    FILE *reserva;

    reserva = fopen("reserva.txt", "a"); // Modo "a" para append
    if (reserva == NULL) {
        printf("Erro ao abrir o arquivo de reservas.\n");
        return;
    }

    fprintf(reserva, "Nome: %s\n", novo_passageiro->nome);
    fprintf(reserva, "Documento: %s\n", novo_passageiro->documento);
    fprintf(reserva, "Voo: %d\n\n", voo_selecionado);

    fclose(reserva);
}

// Função para cancelar reserva de passagem
void cancelarReserva(Voo** voos, Passageiro** passageiros, int* total_reservas) {
    int num_reserva;
    printf("Digite o número da reserva que deseja cancelar (1-%d): ", *total_reservas);
    scanf("%d", &num_reserva);

    if (num_reserva < 1 || num_reserva > *total_reservas || passageiros[num_reserva - 1] == NULL) {
        printf("Reserva selecionada inválida.\n");
        return;
    }

    // Libera a memória associada ao passageiro
    free(passageiros[num_reserva - 1]->nome);
    free(passageiros[num_reserva - 1]->documento);
    free(passageiros[num_reserva - 1]);
    passageiros[num_reserva - 1] = NULL;

    // Incrementa a quantidade de assentos disponíveis no voo correspondente
    voos[num_reserva - 1]->assentos_disponiveis++;

    (*total_reservas)--;

    printf("Reserva cancelada com sucesso.\n");
}


// Função para consultar reservas
void consultarReservas(Passageiro** passageiros, int total_reservas) {
    if (total_reservas == 0) {
        printf("Não há reservas realizadas.\n");
        return;
    }

    printf("Reservas Realizadas:\n");
    for (int i = 0; i < total_reservas; i++) {
        if (passageiros[i] != NULL) {
            printf("Reserva %d: Nome - %s, Documento - %s\n", i + 1, passageiros[i]->nome, passageiros[i]->documento);
        }
    }
}

// Função principal
int main() {
    int opcao;
    int total_voos = 2; // Inicialmente, temos 2 voos disponíveis
    int total_reservas = 0;
    
    // Alocando memória para voos e passageiros
    Voo** voos = (Voo*) malloc(total_voos * sizeof(Voo));
    Passageiro** passageiros = (Passageiro*) malloc(total_reservas * sizeof(Passageiro));

        // Inicializando voos
    for (int i = 0; i < total_voos; i++) {
        voos[i] = (Voo*) malloc(sizeof(Voo));
        voos[i]->origem = (char*) malloc(50 * sizeof(char));
        voos[i]->destino = (char*) malloc(50 * sizeof(char));
        voos[i]->data = (char*) malloc(20 * sizeof(char));
        voos[i]->horario = (char*) malloc(10 * sizeof(char));

        printf("Digite a origem do voo %d: ", i + 1);
        fgets(voos[i]->origem, 50, stdin);
        
        printf("Digite o destino do voo %d: ", i + 1);
        fgets(voos[i]->destino, 50, stdin);
        
        printf("Digite a data do voo %d: ", i + 1);
        fgets(voos[i]->data, 20, stdin);
        
        printf("Digite o horário do voo %d: ", i + 1);
        fgets(voos[i]->horario, 10, stdin);
        
        printf("Digite a quantidade de assentos disponíveis para o voo %d: ", i + 1);
        scanf("%d", &voos[i]->assentos_disponiveis);
        // Limpa o buffer de entrada para evitar problemas com o próximo fgets
        while (getchar() != '\n');
    }


    // Menu interativo
    do {
        printf("\nMenu Principal:\n");
        printf("1. Consultar Voos Disponíveis\n");
        printf("2. Reservar Passagem\n");
        printf("3. Cancelar Reserva\n");
        printf("4. Consultar Reservas\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                consultarVoos(voos, total_voos);
                break;
            case 2:
                reservarPassagem(voos, passageiros, &total_reservas, total_voos);
                break;
            case 3:
                cancelarReserva(voos, passageiros, &total_reservas);
                break;
            case 4:
                consultarReservas(passageiros, total_reservas);
                break;
            case 5:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 5);

    // Liberando a memória alocada para voos
    for (int i = 0; i < total_voos; i++) {
        free(voos[i]->origem);
        free(voos[i]->destino);
        free(voos[i]->data);
        free(voos[i]->horario);
        free(voos[i]);
    }
    free(voos);

    // Liberando a memória alocada para passageiros
    for (int i = 0; i < total_reservas; i++) {
        if (passageiros[i] != NULL) {
            free(passageiros[i]->nome);
            free(passageiros[i]->documento);
            free(passageiros[i]);
        }
    }
    free(passageiros);

    return 0;
}