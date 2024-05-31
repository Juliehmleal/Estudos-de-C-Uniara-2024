#include <stdio.h>
#include <stdlib.h>

float Vm (float distancia, float tempo)
{
    return distancia/tempo;
}

int main()
{
    float *distancia = (float *) malloc(sizeof(float));

    if (distancia == NULL) //NULL == NULO
    {
        printf("Erro no procesos de alocação de memória dinâmica");
        return 1;
    }


    float *tempo = (float *) malloc(sizeof(float));

    if (tempo == NULL) //NULL == NULO
    {
        printf("Erro no procesos de alocação de memória dinâmica");
        return 1;
    }

    printf("Distancia: ");
    scanf("%f", distancia);
    printf("Tempo: ");
    scanf("%f", tempo);

    //calculando velocidade média
    printf("Velocidade Media: %.2f", Vm(*distancia, *tempo));

    free(distancia);
    free(tempo);
    //Liberando memória e realizando novamente a operação

    printf("\n");
    printf("Distancia: ");
    scanf("%f", distancia);
    printf("Tempo: ");
    scanf("%f", tempo);

    printf("Velocidade Media: %.2f", Vm(*distancia, *tempo));

    
    return 0;
}
