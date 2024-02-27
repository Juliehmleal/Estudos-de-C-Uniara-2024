#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    int contador=0;
    int numero;
    
    printf("digite o numero que deseja contar dentro do vetor: ");
    scanf("%i", &numero);

    printf("Digite 5 valores inteiros: \n");
    
    for(i=0; i<5;i++)
    {
        scanf("%i", &vetor[i]);
        
        if(vetor[i] == numero)
            contador++;
    }
    
    printf("o numero %i apareceu %i vezes", numero, contador);
    

    return 0;
}

