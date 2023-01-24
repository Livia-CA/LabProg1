/*Escreva um programa para verificar se um número é par ou ímpar usando operador ternário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    ((numero % 2) == 0) ? printf("%d é par") : printf("%d é impar");

    return 0;
}
