#include <stdio.h>

int desenhaLinha(int tamanho, char linha[]);

int main()
{
    int tamanho=0;
    char linha[21];

    printf("Digite o Tamanho da linha(1 a 20):");
    scanf("%d", &tamanho);

    desenhaLinha(tamanho, linha);
    return 0;
}


int desenhaLinha(int tamanho, char linha[])
{
    if(tamanho < 1 || tamanho > 20)
            return 1;
    else{
        for(int i = 0; i < tamanho; i++)
        {
            linha[i] = '*';
        }
        linha[tamanho] = '\0';
        printf("%s", linha);
    }
    return 0;
}
