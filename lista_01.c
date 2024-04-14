#include <stdio.h>

int desenhaQuadrado(int tamanho, int vazado);

int main()
{
    int tamanho=0, vazado;

    printf("Digite o Tamanho do quadrado(1 e 20):");
    scanf("%d", &tamanho);

    do{
        printf("vazado?\n Nao(0) Sim(1):");
        scanf("%d", &vazado);
    }while(vazado != 0 && vazado != 1);


    desenhaQuadrado(tamanho,vazado);
    return 0;
}


int desenhaQuadrado(int tamanho, int vazado)
{
    if(tamanho < 0 || tamanho > 20)
            return 1;
    else{
        if(!vazado)
        {
        for(int i = 0; i < tamanho; i++)
        {
            for(int j = 0; j < tamanho; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
            return 1;
        }else{
        for(int i = 0; i < tamanho; i++){
            for(int j = 0; j < tamanho; j++){
            // Verifica se estamos na primeira ou ultima linha, ou na primeira ou ultima coluna
                if(i == 0 || i == tamanho - 1 || j == 0 || j == tamanho - 1)
                    printf("* ");
                else
                    printf("  "); // espaco em branco
            }
            printf("\n");
        }
        return 1;
      }
    }
    return 0;
}
