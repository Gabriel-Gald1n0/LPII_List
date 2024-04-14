#include <stdio.h>

int desenhaTriangulo(int tamanho, int tipo);

int main()
{
    int tamanho=0, tipo;

    printf("Digite o Tamanho do triangulo(1 e 20):");
    scanf("%d", &tamanho);


    printf("Tipo (1) (2) (3) (4):");
    scanf("%d", &tipo);



    desenhaTriangulo(tamanho,tipo);
    return 0;
}

int desenhaTriangulo(int tamanho, int tipo)
{
    if(tamanho < 0 || tamanho > 20)
            return 1;
    else{
            switch (tipo)
            {
            case 1:
                for(int i = 0; i < tamanho; i++)
                {
                    for(int j = 0; j <= i; j++)
                        printf("*");
                    printf("\n");
                }
                break;
            case 2:
                for(int i = tamanho; i > 1 ; i--)
                {
                    for(int j = i; j > 1; j--)
                        printf("*");
                    printf("\n");
                }
                break;
            case 3:
                for(int i = tamanho; i > 1 ; i--)
                {
                    for(int j = tamanho - i; j > 0; j--)
                        printf(" ");
                    for(int j = i; j > 1; j--)
                        printf("*");
                    printf("\n");
                }
                break;
            case 4:
                for(int i = 0; i < tamanho; i++)
                {
                    for(int j = 0; j < tamanho - i; j++)
                        printf(" ");
                    for(int j = 0; j <= i; j++)
                        printf("*");
                    printf("\n");
                }
                break;
            default:
                return 2;
            }
    }
    return 0;
}
