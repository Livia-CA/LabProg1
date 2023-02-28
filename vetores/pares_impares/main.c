#include <stdio.h>
#include <stdlib.h>

#define TMNH 10

int main()
{
    int vetor[TMNH], i, j, pares, impares;

    pares = 0;
    impares = 0;

    for (i = 0; i < TMNH; i++){
        printf("digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for (j = 0; j < TMNH; j++){
        if(vetor[j]%2 == 0){
            pares++;
        }
        else{
            impares++;
        }
    }

    printf("a quantidade de pares eh: %d\na quantidade de impares eh: %d", pares, impares);
    return 0;
}
