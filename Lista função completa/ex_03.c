#include <stdio.h>

int somaVetor (int x[], int a)
{
    int i;
    int soma=0;

    for (i = 0; i < a; i++)
    {
        soma += x[i];
    }

    return soma;   
}


int main ()
{
    int vetor[10];
    int i;
    int count;

    printf("digite a quantidade de numeros que deseja saber a soma:\n");
    scanf("%i", &count);

    printf("agora digite a os numeros que deseja somar: ");
    for (i = 0; i < count; i++)
    {
        scanf("%i", &vetor[i]);
    }
       
    printf("\n%i", somaVetor(vetor,count));

    return 0;
}