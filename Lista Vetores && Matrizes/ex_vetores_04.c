
#include <stdio.h>

int main()
{
    int vetor[5];
    int i, contador=0;
    int soma = 0, media;
    
    for(i=0; i<5; i++)
    {
        printf("valor %i: ",i+1);
        scanf("%i", &vetor[i]);
    }
    
    for(i=0; i<5; i++)
    {
        if(vetor[i] % 2 == 0)
        {
           soma += vetor[i];
           contador++; 
        }
            
    }
    
    media = soma/contador;
    
    printf("os numeros pares tem como media: %i", media);
    
    return 0;
}

