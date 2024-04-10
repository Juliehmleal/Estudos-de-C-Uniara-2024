#include <stdio.h>

typedef struct 
{
    int id;
    char nome[50];
    float preco;
    int quantidade;
}Produto;

void Imprimir(){
    printf("\n");
    printf("\nSelecione uma opção");
    printf("\n1.Para adicionar um produto");
    printf("\n2.Atualizar produto");
    printf("\n3.Exibir produtos");
    printf("\n0.Para sair");
    printf("\n");
}

void addProduto(Produto estoque[], int *numProduto){
    estoque[*numProduto].id = numProduto+1;
    printf("Nome do Produto: ");
    scanf("%s", estoque[*numProduto].nome);
    printf("Preco: ");
    scanf("%f", &estoque[*numProduto].preco);
    printf("Quantidade: ");
    scanf("%i", &estoque[*numProduto].quantidade);
    (*numProduto)++;
}

void exibirProdutos (Produto estoque[], int numProduto){
    int i;
    for (i = 0; i < numProduto; i++)
    {
        printf("ID: %i\n", estoque[i].id);
        printf("Nome: %s\n", estoque[i].nome);
        printf("Preco: %.2f\n", estoque[i].preco);
        printf("Quantidade: %i\n", estoque[i].quantidade);
    }
}

void alterarProduto (estoque, numProduto) {
    int operador;
    printf("Digite o que deseja alterar \n");
    printf("1. nome\n");
    printf("2. preco\n");
    printf("3. Quantidade\n");
    scanf("%i", &operador);

    switch (operador)
    {
    case 1:
        
        break;

    case 2:

        break;

    case 3:

        break;

    default:
        printf("opcao invalida");
        break;
    }    
}

int main() {
    int op=-1;

    Produto estoque[50];
    int numProduto = 0;
    int identificador;

    while (op!=0)
    {
        Imprimir();
        scanf("%i", &op);

        switch (op)
        {
            case 1:
                addProduto(estoque, &numProduto);
                break;

            case 2:
                printf("Digite o id do produto que deseja alterar: ");
                scanf("%i", &identificador);
                alterarProduto(estoque, identificador);
                break;

            case 3:
                exibirProdutos(estoque, numProduto);
                break;

            case 0:
                printf("Saindo...\n");
                break;
            
            default:
                printf("opção inválida");
                break;

            
        }
    }
    


    return 0;
}