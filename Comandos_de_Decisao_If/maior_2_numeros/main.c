//Escreva um programa para ler dois números e determinar o maior.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;

    printf("Digite dois numeros inteiros: " );
    scanf("%d%d", &numero1, &numero2);

    if (numero1 > numero2)
        printf("%d eh maior que %d", numero1, numero2);
    else
        printf("%d eh maior que %d", numero2, numero1);
}
