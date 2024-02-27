#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, d;
    printf("informe o valor de A: ");
    scanf("%f", &a);

    printf("informe o valor de B: ");
    scanf("%f", &b);

    printf("informe o valor de C: ");
    scanf("%f", &c);

    d = b - (4*a*c);

    x1 = (((-b) + sqrt(b-(4*a*c)))/(2*a));

    x2 = (((-b) - sqrt(b-(4*a*c)))/(2*a));

    printf("x1: %.2f", x1);
    printf("x2: %.2f", x2);

    return 0;
}
