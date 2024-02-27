#include <stdio.h>

int main ()
{
  int l1, l2, l3;
  printf ("Lado 1: ");
  scanf ("%d", &l1);

  printf ("Lado 2: ");
  scanf ("%d", &l2);


  printf ("Lado 3: ");
  scanf ("%d", &l3);

  if(l1 + l2 > l3 && l1 + l3 > l2 && l3 + l2 > l1)
  {
    printf("Triangulo obedece a condicao de existencia! \n");
        if (l1 == l2 == l3)
	        printf("Triangulo Equilatero");
        if ((l1 == l2 )|| (l1 == l3) || (l2 == l3))
          printf("Triangulo Isoceles");
        else
          printf("Triangulo Escaleno");
  }
  return 0;
}
