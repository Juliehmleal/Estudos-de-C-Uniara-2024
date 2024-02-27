
#include <stdio.h>

int main() {
    int num, i, tabuada;
    
    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    
    for (i=0; i<11; i++)
    {
        tabuada = num * i;
        if(tabuada % 2 != 0)
            printf("%d\n", tabuada);
    }

    return 0;
}