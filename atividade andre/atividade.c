#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_PALAVRA 100

int tamanhoPalavra(char x[MAX_PALAVRA]){
    int tamanho=0;
    
    while(x[tamanho] != '\0'){
        tamanho++;
    }
    
    return tamanho;
}

int main(){
    char palavra[MAX_PALAVRA];

    printf("Digite uma palavra: ");
    fgets(palavra, MAX_PALAVRA, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int tamanho;
    tamanho = tamanhoPalavra(palavra);
    printf("tamanho da palavra: %i\n", tamanho);


    int i;
    for (i = 0; i <= tamanho; i++)
    {
        palavra[i] = toupper(palavra[i]);
    }
    
    printf("PALAVRA MAIUSCULA: %s\n", palavra);

    for (i = 0; i <= tamanho; i++)
    {
        palavra[i] = tolower(palavra[i]);
    }
    
    printf("palavra minuscula: %s\n", palavra);

    int vogais, consoante;

    for (i = 0; i <= tamanho; i++)
    {
        if(palavra[i]=='a' || palavra[i]=='e'||palavra[i]=='i'||palavra[i]=='o'||palavra[i]=='u')
            vogais++; 
        else
            consoante++;
    }

    printf("quantidade de vogais: %i\n",vogais);
    printf("quantidade de consoante: %i",consoante);

    return 0;
}