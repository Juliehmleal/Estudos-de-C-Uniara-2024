#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int dia, mes, ano;
    double litragem;
    char nome_arq[100];
} Lote;

#define MAX_LOTES 100

Lote lotes[MAX_LOTES];
int num_lotes = 0;

// Função para ler dados do arquivo e armazená-los no struct
void ler_arquivo(Lote *lote, const char *nome_arq) {
    FILE *arquivo = fopen(nome_arq, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    strcpy(lote->nome_arq, nome_arq);

    while (fscanf(arquivo, "%d/%d/%d %lf", &lote->dia, &lote->mes, &lote->ano, &lote->litragem) != EOF) {
        lotes[num_lotes++] = *lote;
    }

    fclose(arquivo);
}

// Função para inserir lote
void inserir_lote() {
    char nome_arq[100];
    printf("Digite o nome do arquivo (nome.txt): ");
    scanf("%s", nome_arq);

    Lote lote;
    ler_arquivo(&lote, nome_arq);

    printf("Lote inserido com sucesso.\n");
}

// Função para eliminar lote
void eliminar_lote() {
    char nome_arq[100];
    printf("Digite o nome do arquivo a ser eliminado (dd_mm_aaaa.txt): ");
    scanf("%s", nome_arq);

    if (remove(nome_arq) == 0) {
        printf("Arquivo %s eliminado com sucesso.\n", nome_arq);
    } else {
        printf("Erro ao eliminar o arquivo %s.\n", nome_arq);
    }
}

// Função para calcular o somatório mensal e salvar em CSV
void somatorio_mensal() {
    double soma_mensal[12] = {0};

    for (int i = 0; i < num_lotes; i++) {
        soma_mensal[lotes[i].mes - 1] += lotes[i].litragem;
    }

    FILE *arquivo = fopen("somatorio_mensal.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo CSV.\n");
        return;
    }

    fprintf(arquivo, "Mes,Total de Litros\n");
    for (int i = 0; i < 12; i++) {
        fprintf(arquivo, "%d,%.2lf\n", i + 1, soma_mensal[i]);
    }

    fclose(arquivo);
    printf("Somatorio mensal salvo em somatorio_mensal.csv.\n");
}

// Função para listar todos os lotes em CSV
void listar_lotes() {
    FILE *arquivo = fopen("listagem_lotes.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo CSV.\n");
        return;
    }

    fprintf(arquivo, "Dia,Mes,Ano,Litragem,Arquivo\n");
    for (int i = 0; i < num_lotes; i++) {
        fprintf(arquivo, "%d,%d,%d,%.2lf,%s\n",
                lotes[i].dia, lotes[i].mes, lotes[i].ano,
                lotes[i].litragem, lotes[i].nome_arq);
    }

    fclose(arquivo);
    printf("Listagem de lotes salva em listagem_lotes.csv.\n");
}

int main() {
    int opcao;

    while (1) {
        printf("Menu:\n");
        printf("1- Inserir lote.\n");
        printf("2- Eliminar lote.\n");
        printf("3- Somatorio mensal. (Em CSV)\n");
        printf("4- Listagem. (CSV)\n");
        printf("5- Encerrar.\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserir_lote();
                break;
            case 2:
                eliminar_lote();
                break;
            case 3:
                somatorio_mensal();
                break;
            case 4:
                listar_lotes();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}