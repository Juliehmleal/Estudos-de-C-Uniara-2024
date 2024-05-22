#include <stdio.h>

typedef struct {
    char nome[20];
    int idade;
    float nota;
}tabela;

void addAluno ()
{
    FILE *arquivo;

    arquivo = fopen("tabela.csv", "a");

    tabela alunos[3];

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o nome do aluno(a): ");
        scanf("%s", &alunos[i].nome);
        printf("\nDigite a idade: ");
        scanf("%i", &alunos[i].idade);
        printf("\nDigite a nota: ");
        scanf("%f", &alunos[i].nota);
    }
    
    for (i = 0; i < 3; i++)
    {
        fprintf(arquivo, "%s, %i, %f,\n", alunos[i].nome, alunos[i].idade, alunos[i].nota);
    }
    
    fclose(arquivo);
}

void deleteMyFile()
{
    FILE *arquivo;

    arquivo = fopen("tabela.csv", "a");

    if (remove("tabela.csv")== 0)
    {
        printf("Arquivo foi removido com sucesso");
    }else{
        printf("Erro ao excluir o arquivo");
    }
      
    fclose(arquivo);
}

void Imprimir (){
    printf ("1-Cadastrar aluno\n");
    printf("2-Alunos Alunos\n");
    printf("3-Deletar Base de Dados\n");
    printf("\n0-Para sair");
}

int main()
{
    FILE *arquivo;

    arquivo = fopen("tabela.csv", "w");

    int opcao = -1;

    while (opcao != 0)
    {
        Imprimir();
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            addAluno();
            break;

        case 2:
            printf("Dados Listados na tabela csv!!\n");
            break;

        case 3:
            deleteMyFile();
            break;

        case 0:
            printf("\nSaindo...");
            break;

        default:
            printf("opção inválida");
            break;
        }
    }

    fclose(arquivo);
    
    return 0;
}
