#include <stdio.h>
#include <stdlib.h>

int parOuImpar (int x)
{
    if (x%2 == 0)
        return 0;
    else
        return 1;
}

void Imprimir (int flag)
{
    if (flag == 0)
        printf("numero par");
    else
        printf("numero impar");

    
}

int main ()
{ 
    int num;

    printf("digite um numero: \n");
    scanf("%i", &num);

    Imprimir(parOuImpar(num));

    return 0;
}
