#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_01.h"
#define MAX_SIZE 100

int main()
{
    double valores[MAX_SIZE];
    int N;

    srand(time(NULL));
    N = rand() % MAX_SIZE;

    for(int i = 0; i < N; i++)
        valores[i] = rand() % MAX_SIZE;

    normalizaN(valores,N);
    for(int i = 0; i < N; i++)
        printf("Normalizados = %.2lf\n",valores[i]);
    return 0;
}

void normalizaN(double x_inout[ ], int n)
{
    double media = valorMedioN(x_inout,n);
    for(int i = 0; i < n; i++)
        x_inout[i] -= media;

}

double valorMedioN(double x[], int n)
{
    double soma = 0.0;
    for(int i = 0; i < n; i++)
        soma += x[i];

    return soma/n;
}



