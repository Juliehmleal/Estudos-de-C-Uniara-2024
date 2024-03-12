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
    humano teste;
    
    printf("Digite seu nome completo: ");
    fgets(teste.nome_completo, MAX_NOME_COMPLETO, stdin);
    teste.nome_completo[strcspn(teste.nome_completo, "\n")] = '\0';
    
    printf("Digite seu email: ");
    fgets(teste.email, MAX_EMAIL_COMPLETO, stdin);
    teste.email[strcspn(teste.email, "\n")] = '\0';
    
    printf("Digite seu numero de celular: ");
    fgets(teste.celular, MAX_CELULAR, stdin);
    teste.celular[strcspn(teste.celular, "\n")] = '\0';
    
    printf("\nNome completo: %s\n", teste.nome_completo);
    printf("Email: %s\n", teste.email);
    printf("Celular: %s\n", teste.celular);
    
    

    return 0;
}