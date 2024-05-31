#include <stdio.h>

int main(int argc, char const *argv[])
{
    //alocalçao estática de memória
    int array_estatico[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        array_estatico[i] = i*10;
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("Array Estático[%d] = %d \n", i, array_estatico[i]);
    }
    
    //alocação de memoria estatica é realizada em tempo de compilação 

    return 0;
}
