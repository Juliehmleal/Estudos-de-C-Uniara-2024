#include <stdio.h>

int main() 
{
    int num1, num2, num3, maior;
    
    printf("digite 3 números inteiros \n");
    
    printf("número 1: ");
    scanf("%d", &num1);
    
    printf("número 2: ");
    scanf("%d", &num2);
    
    printf("número 3: ");
    scanf("%d", &num3);

    maior = 0;
    
    if(maior < num1)
        maior = num1;
    if(maior < num3)
        maior = num3;
    
    printf("Maior numero: %d \n", maior);
    
    return 0;
}