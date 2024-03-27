#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x;
    float y;
};

struct Ponto createPoint(float x, float y)
{
    struct Ponto p;
    p.x = x;
    p.y = y;
    return p;
}

float distance (struct Ponto p1, struct Ponto p2)
{
    return sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2));
}

void printPonto (struct Ponto p)
{
    printf("Coordenadas (%.2f, %.2f)", p.x, p.y);
}



int main ()
{
    printf("Inicio\n");

    struct Ponto p1 = createPoint(3.0, 4.0);
    struct Ponto p2 = createPoint(6.0, 8.0);

    printf("P1: ");
    printPonto(p1);
    printf("\n");
    printf("P2: ");
    printPonto(p2);
    printf("\n");
    
    printf("Distancia entre os pontos %.2f\n", distance(p1, p2));
    

    return 0;
}
