#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    int soma;

    printf("Escreva 5 numeros inteiros\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%i", &vetor[i]);
        soma += vetor[i];
    }
    
    printf("%i", soma);

    return 0;
}
