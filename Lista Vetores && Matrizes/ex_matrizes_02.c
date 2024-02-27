#include <stdio.h>

int main()
{
    int vetor[2][2];
    int i, j, k;
    int divisores;
    int primos;

    //declarando valores inteiros na matriz
    vetor[0][0] = 10;
    vetor[0][1] = 7;
    vetor[1][0] = 9;
    vetor[1][1] = 13;


    //verificando numeros primos indo por cada elemento da matriz
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            divisores = 0;
            for (k = 2; k < vetor[i][j]; k++)
            {
                if (vetor[i][j] % k == 0)
                    divisores++;
            }
            if (divisores == 0)
                {
                    primos++;
                    printf("numero %i em %i %i é primo\n", vetor[i][j], i, j);
                }
        }
        
    }
    
    return 0;
}