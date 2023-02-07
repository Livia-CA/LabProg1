#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, contador, n;

    soma = 0;
    contador = 1;

    while (contador <= 2) {
        printf("Entre com um numero: ");
        scanf("%d", &n);

        if (n == 0){
            contador++;
            printf("\n%d\n", soma);
            soma = 0;
        }else{
            if ((n%2) ==0) {
                soma += n;
            }
            contador = 1;
        }
    }

    return 0;
}
