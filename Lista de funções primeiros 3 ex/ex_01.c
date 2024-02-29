#include <stdio.h>

double fatorial (int x)
{
    int i;
    long int fatorial = 1;

    for (i = 1; i < x; i++)
    {
        fatorial += fatorial * i;
    }
    
    return fatorial;
}

void main()
{
    int num;
    long int numfatorado;

    printf("digite o numero que deseja fatorar: ");
    scanf("%i", &num);

    numfatorado = fatorial(num);

    printf("o numero %i fatorado tem como resultado: %i", num, numfatorado);
}