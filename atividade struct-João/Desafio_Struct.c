#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_NOME_COMPLETO 100
#define MAX_EMAIL_COMPLETO 100
#define MAX_CELULAR 15

typedef struct
{
    char nome_completo[MAX_NOME_COMPLETO];
    char email [MAX_EMAIL_COMPLETO];
    char celular [MAX_CELULAR];
} humano;


int main() {
    int i;
    humano teste[10];
    
    for(i=0; i<10; i++)
    {
        printf("\nDigite seu nome completo: ");
        fgets(teste[i].nome_completo, MAX_NOME_COMPLETO, stdin);
        teste[i].nome_completo[strcspn(teste[i].nome_completo, "\n")] = '\0';
    
        printf("Digite seu email: ");
        fgets(teste[i].email, MAX_EMAIL_COMPLETO, stdin);
        teste[i].email[strcspn(teste[i].email, "\n")] = '\0';
    
        printf("Digite seu numero de celular: ");
        fgets(teste[i].celular, MAX_CELULAR, stdin);
        teste[i].celular[strcspn(teste[i].celular, "\n")] = '\0';
    }
    
    for(i=0; i<10;i++)
    {
        printf("\nAluno %i\n", i+1);
        printf("Nome completo: %s\n", teste[i].nome_completo);
        printf("Email: %s\n", teste[i].email);
        printf("Celular: %s\n", teste[i].celular);
    }
    

    return 0;
}