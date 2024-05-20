#include <stdio.h>

void addDados (char *nomearquivo) {
    printf("Adicionando dados...\n");

    FILE *arquivo;

    arquivo = fopen(nomearquivo, "a");

    //eu preciso verificar se deu algum problema no processo de abertua deste arquivo

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return;
    }

    //para add novos dadosno final do arquivo eu posso utilizar o seguinte código
    int i, j, vezes;

    for (i = 2; i < 10; i++)
    {
        for (j = 0; j <= 10; j++)
        {
            vezes = i*j;
            fprintf(arquivo, "%i x %i = %i \n", i, j, vezes);
            printf("%i x %i = %i\n", i, j, vezes);
        }
        fprintf(arquivo, "\n");
        printf("\n");
    }
    
    fprintf(arquivo, "fim!");


    //para fechar nosso arquivo que esta sendo manipulado
    fclose(arquivo);
}

int main(){
    addDados("arquivo.txt");

    return 0;
}