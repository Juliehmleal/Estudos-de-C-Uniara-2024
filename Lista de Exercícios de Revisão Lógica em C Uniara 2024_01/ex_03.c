#include <stdio.h>

int conversor(float x)
{
    float y;
    return y = (1.8*x) + 32;
}

int main()
{
    float celsius, fahrenheit;

    printf("CONVERSOR CELSIUS PARA FAHRENHEIT\n");
    printf("insira a temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = conversor(celsius);

    printf("A temperatura %.2f em Celsius é aproximadamente igual a %.2f fahrenheit", celsius, fahrenheit);

    return 0;
}
