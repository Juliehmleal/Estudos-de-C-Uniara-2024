#include <stdio.h>

void addArquivo(const char *nomeArquivo, const char *novosDados)
{
    FILE *arquivo;
    arquivo = fopen(nomeArquivo, "a");

    if (arquivo == NULL)
    {
        printf("\nErro ao abrir o arquivo");
        return ;
    }
    
    fprintf(arquivo, "%s\n", novosDados);

    fclose(arquivo);

    printf("Novos dados foram adicionados ao arquivo. \n");

}

int main()
{
    printf("\ncompilado pelo terminal\n");

    addArquivo("dados.txt", "dados adicionados por uma função.");
    return 0;
}
