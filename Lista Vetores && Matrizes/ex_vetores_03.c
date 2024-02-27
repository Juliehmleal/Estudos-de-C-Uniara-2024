#include <stdio.h>

int main()
{
    int vetor[5];
    int i;

    printf("Escreva 5 numeros inteiros\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%i", &vetor[i]);
    }
    
    for (i = 4; i >= 0; i--)
    {
        printf("\n %i", vetor[i]);
    }
    

    return 0;
}
