#include <stdio.h>
#include <stdlib.h>

#define TMNH 10

int main()
{
    int vetor[TMNH], i, n, r, ant1;

    printf("entre com o numero inicial :");
    scanf("%d", &n);

    printf("entre com a razão :");
    scanf("%d", &r);

    for( i = 1; i <= TMNH; i++){
        vetor[i] = n + (i-1)*r;
        printf("%d\n", vetor[i]);
    }

    return 0;
}
