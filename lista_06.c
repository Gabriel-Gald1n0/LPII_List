#include <stdio.h>
#include "lista_01.h"

int main()
{
    int tamanho=0, tipo;

    printf("Digite o Tamanho do triangulo(1 e 20):");
    scanf("%d", &tamanho);

    printf("Tipo (1) (2) (3) (4):");
    scanf("%d", &tipo);

    desenhaTriangulo2(tamanho,tipo);
    return 0;
}

int desenhaTriangulo2(int tamanho, int tipo)
{
    if(tamanho < 0 || tamanho > 20)
            return 1;
    else{
            switch (tipo)
            {
            case 1:
                for(int i = 0; i <= tamanho; i++){
                    desenhaLinha(i, '*');
                    printf("\n");
                }
                break;
            case 2:
                for(int i = tamanho; i > 0; i--){
                    desenhaLinha(i, '*');
                    printf("\n");
                }
                break;
            case 3:
                for(int i = tamanho; i > 0; i--){
                    desenhaLinha(tamanho - i, ' ');
                    desenhaLinha(i, '*');
                    printf("\n");
                }
                break;
            case 4:
                for(int i = 1; i <= tamanho; i++){
                    desenhaLinha(tamanho - i, ' ');
                    desenhaLinha(i, '*');
                    printf("\n");
                }
                break;
            default:
                return 2;
            }
    }
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

