#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100
int N;

double valorMedio(double x[]);
void normaliza(double x_inout[ ]);

int main()
{
    double valores[MAX_SIZE];

    srand(time(NULL));
    N = rand() % MAX_SIZE;

    for(int i = 0; i < N; i++)
        valores[i] = rand() % MAX_SIZE;

    normaliza(valores);
    for(int i = 0; i < N; i++)
        printf("Normalizados = %.2lf\n",valores[i]);
    return 0;
}

void normaliza(double x_inout[ ])
{
    double media = valorMedio(x_inout);
    for(int i = 0; i < N; i++)
        x_inout[i] -= media;

}

double valorMedio(double x[])
{
    double soma = 0.0;
    for(int i = 0; i < N; i++)
        soma += x[i];

    return soma/N;
}



