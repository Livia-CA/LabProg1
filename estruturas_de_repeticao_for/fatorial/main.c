#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i, fatorial;

    printf("escreva um numero :");
    scanf("%d",&numero);

    fatorial = 1;

    for (i = numero; i >= 1; i--) {
        fatorial = fatorial*i;
    }
    printf("o fatorial eh :%d", fatorial);

    return 0;
}
