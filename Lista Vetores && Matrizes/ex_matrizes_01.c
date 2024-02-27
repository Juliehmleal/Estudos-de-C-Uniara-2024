
#include <stdio.h>

int main()
{
    //1 3 
    //2 4
    int matriz[2][2]; 
    int i, j;
    int soma1, media1, soma2, media2;
    
    matriz[0][0] = 2;
    matriz[0][1] = 3;
    matriz[1][0] = 2;
    matriz[1][1] = 3;
    
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%i", matriz[i][j]);
        }
        printf("\n");
    }
    
    soma1 = matriz[0][0] + matriz[1][0];
    soma2 = matriz[0][1] + matriz[1][1];

    media1 = soma1/2;
    media2 = soma2/2;

    printf("\n media primeira coluna: %i", media1);
    printf("\n media segunda coluna: %i", media2);

    return 0;
}

