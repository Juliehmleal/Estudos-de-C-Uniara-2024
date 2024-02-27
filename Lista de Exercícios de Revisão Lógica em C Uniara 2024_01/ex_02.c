#include <stdio.h>

int main()
{
 float numeros[5];
 float soma, media;
 float maior=0;
 int i;

 printf("Digite 5 numeros: ");

 for (i=0; i<5; i++)
 {
    scanf("%f", &numeros[i]);
    soma += numeros[i];
 }

 media = soma/5;
 
 for(i=0; i<5; i++)
 {
    if (maior < numeros[i])
        maior = numeros[i];
 }

 printf("A media é: %.2f\n", media);
 printf("O maior numero inserido foi: %.2f", maior);

 return 0;
}