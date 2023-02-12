#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont1, cont2, impares;

    printf("Informe um numero: ");
    scanf("%d",&n);

    cont1 = 1;
    cont2 = 1;
    impares = 1;

    while (cont1 <= n) {
        printf("%d³ = ", cont1);

        while(cont2 <= cont1) {
            if (cont2 == cont1) {
                printf("%d\n", impares);
            }
            else {
                printf("%d + ", impares);
            }
            cont2++;
            impares = impares + 2;
        }
        cont1++;
        cont2 = 1;
    }

    return 0;
}
