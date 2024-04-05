#include <stdio.h>
#include <locale.h>


#define MAX_FUNCIONARIOS 100


typedef struct{
    int id;
    char nome[100];
    float salario;
    int quantidade_filhos;
}Pessoa;

void alterarRegistro (Pessoa funcionario[], int y)
{
    printf("Digite o nome do funcionário:");
    scanf("%s", funcionario[y].nome);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario[y].salario);
    printf("Digite a Quantidade de filhos: ");
    scanf("%i", &funcionario[y].quantidade_filhos);
}

void addRegistro (Pessoa funcionario[], int *numFuncionario)
{
    int aux=*numFuncionario;

    funcionario[*numFuncionario].id = aux+1;
    printf("Digite o nome do funcionário:");
    scanf("%s", funcionario[*numFuncionario].nome);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario[*numFuncionario].salario);
    printf("Digite a Quantidade de filhos: ");
    scanf("%i", &funcionario[*numFuncionario].quantidade_filhos);
    (*numFuncionario)++;
}


void imprimirRegistros (Pessoa funcionario[], int numFuncionario)
{
    int i;
    for (i = 0; i < numFuncionario; i++)
    {
        printf("\nId: %i\n", funcionario[i].id);
        printf("Digite o nome do funcionário: %s\n", funcionario[i].nome);
        printf("Digite o salário do funcionário: %.2f\n", funcionario[i].salario);
        printf("Digite a Quantidade de filhos: %i\n",funcionario[i].quantidade_filhos);
    } 
}


void listar2Filhos (Pessoa funcionario[], int numFuncionario){
    int i;
    for (i = 0; i < numFuncionario; i++)
    {
        if (funcionario[i].quantidade_filhos >= 2)
        {
            printf("\nId: %i\n", funcionario[i].id);
            printf("Digite o nome do funcionário: %s\n", funcionario[i].nome);
            printf("Digite o salário do funcionário: %.2f\n", funcionario[i].salario);
            printf("Digite a Quantidade de filhos: %i\n",funcionario[i].quantidade_filhos);
        }  
    }   
}


float somaSalario (Pessoa funcionario[], int numFuncionario)
{
    int i;
    float soma;

    for (i = 0; i < numFuncionario; i++)
        soma += funcionario[i].salario;
    return soma;
}

float maiorSalario (Pessoa funcionario[], int numFuncionario)
{
    int i;
    float maior;

    for (i = 0; i < numFuncionario; i++)
    {
        if (funcionario)
        {
            /* code */
        }
        
    }

    return maior;
}



void Imprimir () {
    printf("\n1.Para adicionar registro\n");
    printf("2.Para alterar um registro\n");
    printf("3.Para eliminar registro\n");
    printf("4.Listar todos os registro\n");
    printf("5.Listar registro que possuam funcionários com mais de 2 filhos\n");
    printf("6.Soma de todos os salários da empresa\n");
    printf("7.Maior salário\n");
    printf("8.Menor salário\n");
    printf("9.Aumentar o salário dos funcionários que possuem salário abaixo de R$1000,00 em 10 porcento\n");
    printf("0.Para sair\n");
    printf("Sua escolha: ");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    Pessoa funcionario[MAX_FUNCIONARIOS];
    int escolha = -1;
    int numFuncionario = 0;
    int indice;

    while (escolha!=0)
    {
        Imprimir();
        scanf("%i", &escolha);
        switch (escolha)
        {
        case 1:
            addRegistro(funcionario, &numFuncionario);

            break;
        
        case 2:
            printf("Digite o indice que deseja alterar: ");
            scanf("%i", &indice);
            alterarRegistro(funcionario, indice-1);   
            break;
        
        case 3:
            printf("\nteste");

            break;
        
        case 4:
            imprimirRegistros(funcionario, numFuncionario);
            break;
        
        case 5:
            listar2Filhos(funcionario, numFuncionario);

            break;
        
        case 6:
            printf("%.2f",somaSalario(funcionario, numFuncionario));

            break;
        
        case 7:
            printf("\nteste");

            break;
        
        case 8:
            printf("\nteste");

            break;
        
        case 9:
            printf("\nteste");

            break;
        

        case 0:
            printf("\nSaindo...\n");
            break;

        default:
            printf("\nopção inválida.\n");
            break;
        }
    }
    

    return 0;
}