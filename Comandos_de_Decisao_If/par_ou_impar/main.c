//Escreva um programa para determinar e imprimir na tela se o número é par ou ímpar.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: " );
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("%d eh par", numero);
    else
        printf("%d eh impar", numero);
}
