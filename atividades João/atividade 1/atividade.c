#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ordem = 10;
    int matriz[ordem][ordem];
    int i, j;

    //inserindo valores na matriz
    for (i = 0; i < ordem; i++)
    {
        for (j = 0; j < ordem; j++)
        {
            matriz[i][j] = 1 + rand() % 1000;
        }
        
    }

    //imprimindo matriz
    for (i = 0; i < ordem; i++)
    {
        for (j = 0; j< ordem; j++)
        {
            printf(" %4i ", matriz[i][j]);
        }
        
        printf("\n");
    }

    //imprimindo apenas valores da diagonal principal
    printf("\n valores da diagonal principal: \n");
    for (i = 0; i < ordem; i++)
    {
        for (j = 0; j< ordem; j++)
        {
            if (i == j)
                printf(" %4i ", matriz[i][j]);
        }
    }
    
    return 0;
}