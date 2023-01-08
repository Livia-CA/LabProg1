//Escreva um programa em C para ler o valor de um inteiro m e imprimir o valor 1 se m é
//maior que 0, 0 quando m é 0 e -1 quando m é menor que 0.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: " );
    scanf("%d", &numero);

    if (numero > 0)
        printf("1");
    else if (numero == 0)
        printf("0");
    else
        printf("-1");
}
