#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 20


double valorMedio(double x[], int N);

int main()
{
    double valores[MAX_SIZE];
    int N;
    srand(time(NULL));
    N = rand() % MAX_SIZE;

    for(int i = 0; i < N; i++)
        valores[i] = rand() % MAX_SIZE;

    double media = valorMedio(valores, N);
    printf("Media = %.2lf\n",media);
    return 0;
}



double valorMedio(double x[], int N)
{
    if(N == 0)
        return 0.0;

    return (x[N - 1] + valorMedio(x, N - 1) * (N - 1)) / N;
}



