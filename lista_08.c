#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100
int N;

double valorMedio(double x[]);

int main()
{
    double valores[MAX_SIZE];

    srand(time(NULL));
    N = rand() % MAX_SIZE;

    for(int i = 0; i < N; i++)
        valores[i] = rand() % MAX_SIZE;

    double media = valorMedio(valores);
    printf("N = %d\n",N);
    printf("media = %.2lf",media);
    return 0;
}

double valorMedio(double x[])
{
    double soma = 0.0;
    for(int i = 0; i < N; i++)
        soma += x[i];

    return soma/N;
}


