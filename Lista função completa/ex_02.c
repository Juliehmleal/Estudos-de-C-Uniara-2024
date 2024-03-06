#include <stdio.h>

int verifica (int a, int b , int c)
{  
    if(a + b > c && a + c > b && b + c > a)
        return 0;
    else
        return 1;
}

void imprimirMensagem (int flag)
{
    if(flag == 0)
        printf("triangulo obedece condicao de existencia");
    else
    {
        printf("triangulo não obedece a condicao de existencia");
    }
}


void main()
{
    int lado[3];
    int i;

    printf("Digite as medidas dos 3 lados para verificar a condição de existência do triângulo\n");

    for (i = 0; i < 3; i++)
    {
        printf("lado %i: ", i+1);
        scanf("%i", &lado[i]);
    }

    imprimirMensagem(verifica(lado[0], lado[1], lado[2]));    
}
