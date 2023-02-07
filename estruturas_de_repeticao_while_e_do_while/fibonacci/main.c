#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, anterior1, anterior2, atual;

    printf("digite um numero: ");
    scanf("%d", &n);

    atual = 1;
    anterior1 = 1;
    anterior2 = 1;

    i = 1;

    while (i <= n) {
        if(i<=2){
            printf("%d \n", atual);
        }else{
            atual = anterior1 + anterior2;
            printf("%d \n", atual);
            anterior2 = anterior1;
            anterior1 = atual;
        }
        i++;
    }

    return 0;
}
