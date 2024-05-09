#include <stdio.h>

void deleteMyFile(const char *fileName)
{
    if (remove(fileName)== 0)
    {
        printf("Arquivo foi removido com sucesso");
    }else{
        printf("Erro ao excluir o arquivo");
    }

        
}

int main(int argc, char const *argv[])
{
    //Chamar uma função para excluir determinado arquivo...

    deleteMyFile(argv[1]); 
    return 0;
}
