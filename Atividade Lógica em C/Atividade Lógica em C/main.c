#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void conversorTemperatura ()
{
    float celsius=0, fahrenheith=0;
    int optemp;

    printf("Conversor de temperatura\n");
    printf("1.Celsius -> fahrenheit \n");
    printf("2.fahrenheit  -> Celsius\n");
    scanf("%i", &optemp);

    if (optemp == 1)
    {
        printf("Celsius: ");
        scanf("%f", &fahrenheith);
        fahrenheith = (1.8*celsius) + 32;

        printf("%.2f fahrenheit em Celsius tem como resultado: %.2f\n", celsius, fahrenheith);
    }
    if (optemp == 2)
    {
        printf("Fahrenheit: ");
        scanf("%f", &fahrenheith);
        celsius = (fahrenheith - 32)/1.8;

        printf("%.2f Celsius em fahrenheit tem como resultado: %.2f\n", fahrenheith, celsius);
    }
}

void conversorHoras()
{
    float horas;
    printf("Digite a quantidade de horas");
    scanf("%f", &horas);

    printf("%.2f horas equivale a %.2f", horas, horas * 3600);
}

void conversorMonetario()
{
    float real, dolar;
    int opmoeda;

    printf("Conversor de moedas\n");
    printf("1.Para Dolar -> real");
    printf("2.Par real -> Dolar");
    scanf("%i", &opmoeda);

    if (opmoeda == 1)
    {
        printf("valor em reais: ");
        scanf("%f", &dolar);
        real = dolar * 5;

        printf("%.2f dolares em reais tem como resultado: %.2f\n", dolar, real);
    }
    if (opmoeda == 2)
    {
        printf("Valor em dolares");
        scanf("%f", &dolar);
        dolar = real / 5;

        printf("%.2f reais em dolares tem como resultado: %.2f\n", dolar, real);
    }
}

void verificarCPF()
{
    int cpf[11];
    int i;
    int somatorio1 = 0, somatorio2 = 0;
    int resto1, digito1, resto2, digito2;

    printf("Verificador de CPF: Digite os 9 primeiros Digitos do seu cpf\n \n");

    for (i = 0; i < 9; i++)
    {
        printf("Digite o numero %i do seu cpf: ", i + 1);
        scanf("%i", &cpf[i]);
    }

    for (i = 0; i < 9; i++)
    {
        somatorio1 += (cpf[i] * (10 - i));
    }

    resto1 = somatorio1 % 11;
    if (resto1 < 2)
        digito1 = 0;
    else
        digito1 = 11 - resto1;

    cpf[9] = digito1;

    for (i = 0; i < 10; i++)
    {
        somatorio2 += (cpf[i] * (11 - i));
    }

    resto2 = somatorio2 % 11;
    if (resto2 < 2)
        digito2 = 0;
    else
        digito2 = 11 - resto2;

    cpf[10] = digito2;

    if (digito1 == cpf[9] && digito2 == cpf[10])
        printf("\nCPF VALIDO");
    printf("\nOs ultimos 2 digitos do seu cpf são: %i %i", digito1, digito2);

    printf("\nSeu cpf inteiro: ");

    for (i = 0; i < 11; i++)
    {
        printf("%i", cpf[i]);
    }
}   

void imprimir()
{
    printf("\n");
    printf("\ndigite 1 para validar cpf");
    printf("\ndigite 2 para converter de números para segundos");
    printf("\ndigite 3 para calcular");
    printf("\ndigite 4 para converter temperaturas");
    printf("\ndigite 5 para converter moedas");
    printf("\ndigite 0 para sair:");
    printf("\n");
}

void calcula()
{
    float num1, num2;
    int opcalcula;

    printf("\nEscolha uma das operações \n");
    printf("1. para somar\n");
    printf("2. para subtrair\n");
    printf("3. para multiplicar\n");
    printf("4. para dividir\n");
    printf("0. para sair\n");

    scanf("%i", &opcalcula);

    while (opcalcula != 0)
    {
        switch (opcalcula)
        {
        case 1:
            printf("Digite os numeros que deseja somar: ");
            scanf("%f", &num1);
            scanf("%f", &num2);
            printf("\nO resultado é: %.2f\n", num1+num2);
            break;

        case 2:
            printf("Digite os numeros que deseja subtrair: ");
            scanf("%f", &num1);
            scanf("%f", &num2);
            printf("\nO resultado é: %.2f\n", num1-num2);
            break;

        case 3:
            printf("Digite os numeros que deseja multiplicar: ");
            scanf("%f", &num1);
            scanf("%f", &num2);
            printf("\nO resultado é: %.2f\n", num1*num2);
            break;
        case 4:
            printf("Digite os numeros que deseja dividir sendo o primeiro o numerador e o segundo o denominador");
            scanf("%f", &num1);
            scanf("%f", &num2);
            if (num2==0)
                printf("\nDivisão por 0 não existe\n");
            else
                printf("\nO resultado é: %.2f\n",num1/num2 );
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

        scanf("%i", &opcalcula);
    }
}

int main()
{
    int op;

    imprimir();
    scanf("%i", &op);
    while (op != 0)
    {
        switch (op)
        {
        case 1:
            verificarCPF();
            break;

        case 2:
            conversorHoras();
            break;

        case 3:
            calcula();
            break;

        case 4:
            conversorTemperatura();
            break;

        case 5:
            conversorMonetario();
            break;

        default:
            printf("numero inválido;");
        }

        imprimir();

        scanf("%i", &op);
    }

    return 0;
}
