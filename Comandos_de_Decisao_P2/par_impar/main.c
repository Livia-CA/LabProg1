#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resto;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resto = numero%2;

    switch (resto) {
        case 0:
            printf("%d eh um numero par", numero);
            break;
        default:
            printf("%d eh um numero impar", numero);
            break;
    }

    return 0;
}
