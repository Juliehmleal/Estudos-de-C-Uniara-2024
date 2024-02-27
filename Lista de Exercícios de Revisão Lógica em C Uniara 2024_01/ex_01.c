#include <stdio.h>

int main()
{
 float num1, num2, num3, num4, num5;
 float soma;

 printf("Digite 5 numeros: ");

 scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

 soma = num1 + num2 + num3 + num4 + num5;

 printf("A soma é: %.2f", soma);

 return 0;
}
