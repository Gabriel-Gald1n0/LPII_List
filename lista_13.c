#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX_SIZE 100


double valorMedio(double x[], int n);
double desvioPadraoG(double x[ ], int n);

int main()
{
    double valores[MAX_SIZE];
    int N;
    srand(time(NULL));
    N = rand() % MAX_SIZE;

    for(int i = 0; i < N; i++)
        valores[i] = rand() % MAX_SIZE;

    double desvioPadrao = desvioPadraoG(valores,N);
    printf("N = %d\n",N);
    printf("Desvio padrao = %.2lf",desvioPadrao);
    return 0;
}

double desvioPadraoG(double x[ ], int n)
{
    double media = valorMedio(x,n);
    double soma = 0.0;

    for(int i = 0; i < n; i++)
        soma += pow(x[i] - media,2);

    double desvio = sqrt(soma/n);
    return desvio;
}
double valorMedio(double x[], int n)
{
    double soma = 0.0;
    for(int i = 0; i < n; i++)
        soma += x[i];

    return soma/n;
}


