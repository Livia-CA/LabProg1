#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100], i, j, n, aux;

    printf("entre com o tamanho do vetor: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("digite um valor: ");
        scanf("%d", &vetor[i]);
    }

     for (j = n-1; j >= 0 ; j--){
       printf("%d\n", vetor[j]);
    }

    return 0;
}
