#include <stdio.h>


int main()
{
    int cpf[11];
    int i;
    int somatorio1 = 0, somatorio2 = 0;
    int resto1, digito1, resto2, digito2;
    
    printf("Verificador de CPF: Digite os 9 primeiros Digitos do seu cpf\n \n");

    for (i = 0; i < 9; i++)
    {
        printf("Digite o numero %i do seu cpf: ", i+1);
        scanf("%i", &cpf[i]);
    }

    for(i=0; i<9; i++)
    {
        somatorio1 += (cpf[i] * (10-i));
    }
    
    resto1 = somatorio1 % 11;
    if (resto1 < 2)
        digito1 = 0;
    else 
        digito1 = 11 - resto1;
        
    cpf[9] = digito1;
    

    for(i=0; i<10; i++)
    {
        somatorio2 += (cpf[i] * (11-i));
    }
    
    resto2 = somatorio2 % 11;
    if(resto2 < 2)
        digito2 = 0;
    else
        digito2 = 11 - resto2;
        
    
    cpf[10] = digito2;   

    if(digito1 == cpf[9] && digito2 == cpf[10])
        printf("CPF VALIDO");
    printf("\nOs ultimos 2 digitos do seu cpf são: %i %i", digito1, digito2);
    return 0;
}


