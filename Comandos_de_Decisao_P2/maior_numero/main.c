#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;

    printf("digite dois numeros: ");
    scanf("%d%d", &numero1, &numero2);

    (numero1 > numero2) ? printf("%d eh maior que %d", numero1, numero2) : printf("%d eh maior que %d", numero2, numero1);

    return 0;
}
