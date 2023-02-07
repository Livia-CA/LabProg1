#include <stdio.h>
#include <stdlib.h>

int main()
{
   int soma, n, cont, i;

    i = 1;
    n = 1;
    soma = 0;
    cont = 0;

    while (n != 0) {
        printf("Entre com um numero: ");
        scanf("%d", &n);

        while (i <= n){
            if((n % i) == 0){
                cont++;
            }
            i++;
        }
        i = 1;

        if(cont <= 2) {
            soma = soma + n;
        }

        cont = 0;
    }

    printf("A soma é: %d", soma);

    return 0;
}
