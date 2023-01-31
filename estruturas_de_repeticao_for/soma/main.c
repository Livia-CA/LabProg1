#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i, soma;

    printf("escreva um numero :");
    scanf("%d",&numero);

    soma = 0;

    for (i = 1; i <= numero; i++) {
        soma+=i;
        printf("%d\n", i);
    }
    printf("a soma eh :%d", soma);


    return 0;
}
