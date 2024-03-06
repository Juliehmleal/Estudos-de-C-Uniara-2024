#include <stdio.h>

float adição(float a, float b)
{
    return a + b;
}

float subtração(float a, float b)
{
    return a - b;
}

float divisão(float a, float b)
{
    if (b == 0)
    {
        printf("Erro divisão por zero não existe\n");
    }
    else
    {
        return a / b;
    }
}

float multiplicação(float a, float b)
{
    return a * b;
}

int main()
{
    float num1, num2;
    int op;

    printf("\nEscolha uma das operações \n");
    printf("1. para somar\n");
    printf("2. para subtrair\n");
    printf("3. para multiplicar\n");
    printf("4. para dividir\n");
    printf("0. para sair\n");

    scanf("%i", &op);

    while (op != 0)
    {
        switch (op)
        {
        case 1:
            printf("Digite os numeros que deseja somar: ");
            scanf("%f %f", &num1, &num2);
            printf("\nO resultado é: %.2f", adição(num1, num2));
            break;

        case 2:
            printf("Digite os numeros que deseja subtrair: ");
            scanf("%f %f", &num1, &num2);
            printf("\nO resultado é: %.2f", subtração(num1, num2));
            break;

        case 3:
            printf("Digite os numeros que deseja multiplicar: ");
            scanf("%f %f", &num1, &num2);
            printf("\nO resultado é: %.2f", multiplicação(num1, num2));
            break;
        case 4:
            printf("Digite os numeros que deseja dividir: ");
            scanf("%f %f", &num1, &num2);
            printf("\nO resultado é: %.2f", divisão(num1, num2));
            break;

        case 0:
            return 0;
            break;

        default:
            printf("opcção inválida");
            break;
        }

        printf("\nEscolha uma das operações \n");
        printf("1. para somar\n");
        printf("2. para subtrair\n");
        printf("3. para multiplicar\n");
        printf("4. para dividir\n");
        printf("0. para sair\n");

        scanf("%i", &op);
    }

    return 0;
}
