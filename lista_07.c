
#include <stdio.h>

int desenhaLinha(int tamanho, char linha[], int indice);
int desenhaLinhaR(int tamanho, char linha[], int indice);

int main()
{
    int tamanho=0;
    char linha[21];

    printf("Digite o Tamanho da linha(1 a 20):");
    scanf("%d", &tamanho);

    desenhaLinha(tamanho, linha,0);
    return 0;
}

int desenhaLinhaR(int tamanho, char linha[],int indice)
{
    if(indice == tamanho)
    {
        linha[tamanho] = '\0';
        printf("%s", linha);
    }

    linha[indice] = '*';
    return desenhaLinhaR(tamanho, linha, indice+1);
}

int desenhaLinha(int tamanho, char linha[], int indice)
{
    if(tamanho < 1 || tamanho > 20)
            return 1;

    return desenhaLinhaR(tamanho,linha, 0);
}
