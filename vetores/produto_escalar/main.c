#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[100], vetor2[100], i, j, k, n, aux, produto;

    produto = 0;

    printf("entre com o tamanho dos vetores: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("digite um valor para o vetor1: ");
        scanf("%d", &vetor1[i]);
    }

    for (j = 0; j < n; j++){
        printf("digite um valor para o vetor2: ");
        scanf("%d", &vetor2[j]);
    }

     for (k = 0; k < n; k++){
       produto = produto + (vetor1[k]*vetor2[k]);
    }

    printf("O produto escalar entre os vetores é %d", produto);

    return 0;
}
