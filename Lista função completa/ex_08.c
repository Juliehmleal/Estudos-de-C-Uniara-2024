#include <stdio.h>

int potencia (int base, int expoente)
{
    int i, j=base;
    int res;

    if(expoente == 1)
        res = base;
    else
    {
        for (i = 0; i < expoente-1; i++)
            {
                base = base*j;
            }

            res = base;
    }
  
    if(expoente == 0)
        res = 1;

    return res;
}

int main()
{
    int num, expoente;

    printf("base: ");
    scanf("%i", &num);
    printf("expoente: ");
    scanf("%i", &expoente);

    printf("%i", potencia(num, expoente));
    return 0;
}