#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, numero3, aux;

    printf("digite tres numeros: ");
    scanf("%d%d%d", &numero1, &numero2, &numero3);

    aux = (numero1 > numero2 ) ? numero1 : numero2;

    (aux > numero3 ) ? printf("%d eh o maior numero", aux) : printf("%d eh o maior numero", numero3);

    return 0;
}

