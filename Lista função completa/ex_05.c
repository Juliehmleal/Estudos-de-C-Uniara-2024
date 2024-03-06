#include <stdio.h>

int multiplode5 (int x)
{
    if (x % 5 == 0);
        return 0;
    if (x % 5 != 0)
        return 1;   
}

int ImprimirMensagem (int flag)
{
    if(flag==0)
        printf("Número multiplo de 5");
    if(flag==1)
        printf("Número não multiplo de 5");
}

int main ()
{
    int num;

    printf("digite um numero: ");
    scanf("%i", &num);

    ImprimirMensagem(multiplode5(num));
    

    return 0;
}