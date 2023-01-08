//Escreva um programa para ler três números e determinar o maior.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, numero3;

    printf("Digite tres numeros inteiros: " );
    scanf("%d%d%d", &numero1, &numero2, &numero3);

    if ((numero1 > numero2) && (numero1 > numero3))
        printf("%d eh o maior numero", numero1);
    else if ((numero2 > numero1) && (numero2 > numero3))
        printf("%d eh o maior numero", numero2);
    else
        printf("%d eh o maior numero", numero3);
}
