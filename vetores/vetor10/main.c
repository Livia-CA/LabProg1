#include <stdio.h>
#include <stdlib.h>

#define TMNH 10

int main()
{
    int vetor[TMNH], i, j, k, aux;

    for (i = 0; i < TMNH; i++){
        printf("digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for (k = 0; k < 2; k++){
        for (j = k; j < TMNH; j++){
            if(vetor[k] > vetor[j]){
                aux = vetor[k];
                vetor[k] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("o segundo menor valor é %d", vetor[1]);
    return 0;
}
