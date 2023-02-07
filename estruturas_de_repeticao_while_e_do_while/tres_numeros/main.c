#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,b,c,soma;

    printf("digite tres numeros, sendo a > 1: ");
    scanf("%d%d%d", &a,&b,&c);

    i = b>c?c:b;
    j = b<c?c:b;
    soma = 0;

    while (i<=j) {
        if ((i%a) == 0) {
            soma += i;
        }
        i++;
    }

    printf("A soma eh: %d", soma);

    return 0;
}
