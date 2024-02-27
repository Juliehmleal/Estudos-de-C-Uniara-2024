#include <stdio.h>

int main() 
{
    int num;
    
    printf("Digite um numero inteiro de 1 até 7: ");
    scanf("%d", &num);
    
    switch(num)
    {
        case 1:
            printf("Domingo");
            break;
        
        case 2:
            printf("Segunda");
            break;
            
        case 3:
            printf("Terça");
            break;
        
        case 4:
            printf("Quarta");
            break;
            
        case 5:
            printf("Quinta");
            break;
            
        case 6:
            printf("Sexta");
            break;
            
        case 7:
            printf("Sábado");
            break;
            
        default:
            printf("Insira um número válido");
            return 1;
    }
}