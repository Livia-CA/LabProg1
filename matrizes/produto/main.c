#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[100][100], vetor[100], produto[100];
    int l, c, i, j;

    printf("Entre com o numero de linhas e colunas da matriz respectivamente: ");
    scanf("%d%d", &l,&c);

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("Entre com o numero da posicao (%d,%d) da matriz: ", i,j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i = 0; i < c; i++){
        printf("Entre com o elemento %d do vetor: ", i);
        scanf("%f", &vetor[i]);
    }

     for(i = 0; i < l; i++){
        produto[i] = 0;
        for(j = 0; j < c; j++){
            produto[i] = produto[i] + (matriz[i][j]*vetor[j]);
        }
    }

    printf("\n\nA matriz: \n");

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\nO vetor: \n");

    for(j = 0; j < c; j++){
        printf("%.1f\n", vetor[j]);
    }

    printf("\n\nO produto é: \n");

    for(i = 0; i < l; i++){
        printf("%.1f\n", produto[i]);
    }

    return 0;
}
