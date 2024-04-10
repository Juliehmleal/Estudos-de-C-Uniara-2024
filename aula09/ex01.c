#include <stdio.h>
#include <string.h>
#define MAX_TITULO 100
#define MAX_AUTOR 50


//Controle de biblioteca
typedef struct
{
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano;
}Livro;

void imprimir ()
{
    printf("\n Selecine uma opcao");
    printf("\n1. Add Livro");
    printf("\n2. Listar Livros");
    printf("\n3. Buscar pelo titulo");
    printf("\n4. Sair");
    printf("\nOpcao: ");
}

void adicionar(Livro *biblioteca, int *quantidade)
{
    printf("Digite o titulo do livro: ");
    scanf("%s", biblioteca[*quantidade].titulo);
    printf("Digite o autor do livro: ");
    scanf("%s", biblioteca[*quantidade].autor);
    printf("Ano de Publicação: ");
    scanf("%i", biblioteca[*quantidade].ano);
    (*quantidade)++;
}

void listar (Livro *biblioteca, int quantidade)
{
    if (quantidade==0)
    {
        printf("opa não tem nada!");
        return;
    }

    printf("Lista de Livros: \n");
    
    for (int i = 0; i < quantidade; i++)
    {
        printf("Titulo: %s\n", biblioteca[i].titulo);
        printf("Autor: %s\n", biblioteca[i].autor);
        printf("Ano: %i\n", biblioteca[i].ano);
    }
    
}

void buscarLivroPorTitulo(Livro *biblioteca,int quantidade ,char *tituloBusca)
{
    int encontrado = 0;

    for (int i = 0; i < quantidade; i++)
    {
        if (strcmp(biblioteca[i].titulo, *tituloBusca) == 0)
        {
            printf("Livro encontrado: \n");
            printf("Titulo: %s\n", biblioteca[i].titulo);
            printf("Autor: %s\n", biblioteca[i].autor);
            printf("Ano: %i\n", biblioteca[i].ano);
            encontrado = 1;
            break;
        }
        
    }
    
    if (!encontrado)
    {
        printf("Livro não encontrado!");
    }
    
}

int main () {
    Livro biblioteca[100];
    int opcao, quantidade;
    char tituloBusca[20];

    do
    {
        imprimir();
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            adicionar(biblioteca, &quantidade);
            break;

        case 2:
            listar(biblioteca, quantidade);
            break;


        case 3:
            printf("Qual o título do Livro? \n");
            scanf("%s", tituloBusca);
            buscarLivroPorTitulo(biblioteca, quantidade, tituloBusca);
            break;

        case 4:
            printf("\nSaindo...\n");
            break;
        
        default:
            printf("Opcao Invalida!");
            break;
        }

    } while (opcao != 4);
    

    return 0;
}



