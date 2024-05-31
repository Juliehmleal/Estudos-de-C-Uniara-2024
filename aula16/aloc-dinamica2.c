#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *str = (char *) malloc(20 * sizeof(char));

    if (str == NULL)
    {
        printf("Falha no proesso de alocação de memória");
        return 1;
    }

    strcpy(str, "Teste Julie");
    printf("String alocada de forma dinamica: %s\n", str);

    free(str);

    printf("String alocada de forma dinamica: %s\n", str); //Lixo eletrônicos


    return 0;
}
