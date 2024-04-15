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

    double desvioPadrao = desvioPadraoN(valores,N);
    printf("N = %d\n",N);
    printf("Desvio padrao = %.2lf",desvioPadrao);
    return 0;
}

double desvioPadraoN(double x[ ], int n)
{
    double media = valorMedioN(x,n);
    double soma = 0.0;

    for(int i = 0; i < n; i++)
        soma += pow(x[i] - media,2);

    double desvio = sqrt(soma/n);
    return desvio;
}
double valorMedioN(double x[], int n)
{
    double soma = 0.0;
    for(int i = 0; i < n; i++)
        soma += x[i];

    return soma/n;
}


