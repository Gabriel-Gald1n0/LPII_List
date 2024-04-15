#include <stdio.h>
#include "lista_01.h"

int main()
{
    int tamanho=0;
    char linha[21];

    printf("Digite o Tamanho da linha(1 a 20):");
    scanf("%d", &tamanho);

    desenhaLinha2(tamanho, linha,0);
    return 0;
}

int desenhaLinhaR(int tamanho, char linha[],int indice)
{
    if(indice == tamanho)
    {
        linha[tamanho] = '\0';
        printf("%s", linha);
        return 0;
    }

    linha[indice] = '*';
    return desenhaLinhaR(tamanho, linha, indice+1);
}

int desenhaLinha2(int tamanho, char linha[], int indice)
{
    if(tamanho < 1 || tamanho > 20)
            return 1;

    return desenhaLinhaR(tamanho,linha, 0);
}
