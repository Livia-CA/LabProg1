#include <stdio.h>
#include <stdlib.h>

int calcula_produto(int a, int b);

int main()
{
    int a, b, produto;

    printf("Entre com o valor de a: ");
    scanf("%d", &a);

    printf("Entre com o valor de b: ");
    scanf("%d", &b);

    produto = calcula_produto(a,b);

    printf("O produto entre %d e %d eh %d", a, b, produto);

    return 0;
}

int calcula_produto(int a, int b) {

    int soma;

    soma = a % 2 != 0 ? b : 0;

    do {

        a = a/2;
        b = b*2;

        soma += a % 2 != 0 ? b : 0;

    } while (a != 1);

    return soma;
}
