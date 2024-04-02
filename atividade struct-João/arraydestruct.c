#include <stdio.h>
#include <string.h> 

typedef struct {
    char nome[100];
    char email[100];
    char celular[11];
}Pessoas;


int main() {
    Pessoas cadastro[50];
    int i=0, j;
    char opcao='s';

    while (opcao != 'n' && i<=50 )
    {

        printf("Digite seu nome completo: ");
        fgets(cadastro[i].nome,sizeof(cadastro[i].nome),stdin);
        printf("Digite seu email: ");
        fgets(cadastro[i].email,sizeof(cadastro[i].email),stdin);
        printf("Digite seu email: ");
        fgets(cadastro[i].celular,sizeof(cadastro[i].celular),stdin);

        
        printf("para sair digite n, digite outra coisa para cotinuar");
        scanf(" %c", &opcao);
        getchar();
        i++;
    }

    printf("Cadastros inseridos \n");

    for (j = 0; j < i; j++)
    {
        printf("cadastro %2i\n", j+1);
        printf("Nome: %s", cadastro[j].nome);
        printf("Email: %s", cadastro[j].email);
        printf("Email: %s", cadastro[j].celular);
        printf("\n");
    }
    
    return 0;
}