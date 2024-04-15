#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_01.h"
#define MAX_SIZE 20

int main()
{
    double valores[MAX_SIZE];
    int N;
    srand(time(NULL));
    N = rand() % MAX_SIZE;

    for(int i = 0; i < N; i++)
        valores[i] = rand() % MAX_SIZE;

    double media = valorMedioArr(valores, N);
    printf("Media = %.2lf\n",media);
    return 0;
}

double valorMedioArr(double x[], int N)
{
    if(N == 0)
        return 0.0;

    return (x[N - 1] + valorMedioArr(x, N - 1) * (N - 1)) / N;
}



