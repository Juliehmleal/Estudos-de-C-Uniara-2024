#include <stdio.h>

float mediaNotas (float x[],int y)
{
    int i;
    float soma=0;
    for (i = 0; i < y; i++)
    {
        soma += x[i];
    }
    
    float media= soma/y;

    return media;
}


int main ()
{
    float notas[50];
    int i;
    int count;

    printf("digite a quantidade de notas que deseja saber a media:\n");
    scanf("%i", &count);

    printf("agora digite as notas ");
    for (i = 0; i < count; i++)
    {
        scanf("%f", &notas[i]);
    }
       
    printf("\n%.2f", mediaNotas(notas,count));

    return 0;
}