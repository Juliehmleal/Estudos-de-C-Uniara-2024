#include <stdio.h>
#include <string.h>
#define MAX_NOME_COMPLETO 100
#define MAX_NOTAS 3

void imprimirOpcoes ()
{
    printf("\n");
    printf("1.Adicionar Aluno\n");
    printf("2.Imprmir Aluno\n");
    printf("3.Calcular média\n");
    printf("0.Sair");
    printf("\n");
}

struct Pessoa
{
    char nome[MAX_NOME_COMPLETO];
    int matricula;
    float notas[MAX_NOTAS];
};

struct Pessoa addAluno()
{
    struct Pessoa aluno;
    int i;

    getchar();
    printf("Digite seu nome completo: \n");
    fgets(aluno.nome, MAX_NOME_COMPLETO, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
    

    printf("Digite a matricula: \n");
    scanf("%i", &aluno.matricula);

    printf("Digite as notas: \n");
    for (i = 0; i < MAX_NOTAS; i++) 
        scanf("%f", &aluno.notas[i]);

    return aluno;
}

void imprimirAluno(struct Pessoa aluno)
{
    printf("\nNome: %s\n", aluno.nome);
    printf("matricula: %i\n", aluno.matricula);
    printf("Notas: %.2f %.2f %.2f\n",aluno.notas[0], aluno.notas[1], aluno.notas[2]);
}

void media (struct Pessoa aluno)
{
    float media;
    int i;
    for (i = 0; i < MAX_NOTAS; i++)
        media += aluno.notas[i];
    printf("\nmedia do aluno: %.2f\n", media/3);
}

int main()
{
    struct Pessoa aluno;
    int op=-1;
    imprimirOpcoes();
    while (op != 0)
    {
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            aluno = addAluno();
            break;
        
        case 2:
            imprimirAluno(aluno);
            break;
        
        case 3:
            media(aluno);
            break;

        case 0:
            printf("saindo...\n");
            break;

        default:
            printf("opção inválida");
            break;
        }
        imprimirOpcoes();
    }
    
    return 0;
}