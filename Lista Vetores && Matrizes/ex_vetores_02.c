#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    int maior, menor;

    printf("Escreva 5 numeros inteiros\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%i", &vetor[i]);
    }
    
    maior = vetor[0];
    menor = vetor[0];

    for (i = 0; i < 5; i++)
    {
        if(maior < vetor[i])
            maior = vetor[i];
        if(menor > vetor[i])
            menor = vetor[i];
    }

    printf("maior numero: %i\n", maior);
    printf("menor numero: %i", menor);

    return 0;
}
