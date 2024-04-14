#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX_SIZE 100
int N;

double valorMedio(double x[]);
double desvioPadraoG(double x[ ]);

int main()
{
    double valores[MAX_SIZE];

    srand(time(NULL));
    N = rand() % MAX_SIZE;

    for(int i = 0; i < N; i++)
        valores[i] = rand() % MAX_SIZE;

    double desvioPadrao = desvioPadraoG(valores);
    printf("N = %d\n",N);
    printf("Desvio padrao = %.2lf",desvioPadrao);
    return 0;
}

double desvioPadraoG(double x[ ])
{
    double media = valorMedio(x);
    double soma = 0.0;

    for(int i = 0; i < N; i++)
        soma += pow(x[i] - media,2);

    double desvio = sqrt(soma/N);
    return desvio;
}
double valorMedio(double x[])
{
    double soma = 0.0;
    for(int i = 0; i < N; i++)
        soma += x[i];

    return soma/N;
}


