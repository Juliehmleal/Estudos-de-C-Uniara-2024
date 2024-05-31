#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //alocando um vetor de 10 posições do tipo inteiro de forma DINAMICA (pode ser alterado em tempo de compilação)
    int *array_dinamico = (int *) malloc(10 * sizeof(int));

    if (array_dinamico == NULL) //NULL == NULO
    {
        printf("Erro no procesos de alocação de memória dinâmica");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        array_dinamico[i] = i * 20;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("array_dinamico[%d] = %d\n", i, array_dinamico[i]);
    }

    printf("\n");

    free(array_dinamico); // Limpa a memoria do array

    for (int i = 0; i < 10; i++)
    {
        printf("array_dinamico[%d] = %d\n", i, array_dinamico[i]);//Lixo eletrônico
    }
    
    

    return 0;
}
