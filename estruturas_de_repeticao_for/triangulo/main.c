#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tmnh, i, j;

    printf("digite um numero: ");
    scanf("%d", &tmnh);

    for(i = 0; i <= tmnh; i++){
        for(j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
