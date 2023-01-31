#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, numero_invertido, ultimo_numero;

    printf("Digite um numero: ");
    scanf("%d", &n);

    numero_invertido = 0;

    while (n != 0) {
        numero_invertido = (numero_invertido*10)+(n%10);
        n = n/10;
    }

    printf("o numero em ordem inversa: %d", numero_invertido);

    return 0;
}
