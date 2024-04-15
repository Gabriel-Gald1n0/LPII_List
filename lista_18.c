#include <stdio.h>
#include "lista_01.h"

int main()
{
    char c[10] = "gabrielA";
    printf("%s\n",c);
    int quantidade = repeteC(c);
    printf("Em %s existe %d (A ou a)\n",c, quantidade);
    return 0;
}

int repeteC(char *c)//pega o primeiro caractere da string
{
    if( *c == '\0')
        return;
    int cont = (( *c == 'A' || *c == 'a')) ? 1 : 0;
    return cont + repeteC(c + 1); // contabiliza os 1
}
