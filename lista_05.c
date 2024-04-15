#include <stdio.h>
#include "lista_01.h"

int main()
{
    int tamanho=0;

    printf("Digite o Tamanho da linha(1 a 20):");
    scanf("%d", &tamanho);

    desenhaLinha(tamanho, '*');
    return 0;
}

int desenhaLinha(int tamanho, char linha)
{
    if(tamanho < 1 || tamanho > 20)
            return 1;
    else{
        for(int i = 0; i < tamanho; i++)
            printf("%c", linha);
    }
    return 0;
}

