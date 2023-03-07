#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz1[100][100], matriz2[100][100], produto[100][100];
    int l, c, i, j, p, k, q;

    printf("Entre com o numero de linhas e colunas da primeira matriz respectivamente: ");
    scanf("%d%d", &l,&c);

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("Entre com o numero da posicao (%d,%d) da primeira matriz: ", i,j);
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("Entre com o numero de colunas da segunda matriz: ");
    scanf("%d", &p);

    for(i = 0; i < c; i++){
        for(j = 0; j < p; j++){
            printf("Entre com o numero da posicao (%d,%d) da segunda matriz: ", i,j);
            scanf("%f", &matriz2[i][j]);
        }
    }

    for(k = 0; k < l; k++){
        for(q = 0; q < p; q++){
            produto[k][q] = 0;
        }
    }

     for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            for(k = 0; k < p; k++){
                for(q = 0; q < c; q++){
                    produto[i][q] = produto[i][q] + (matriz1[i][j]*matriz2[q][k]);
                }
            }
        }
    }

    printf("\n\nA matriz 1: \n");

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%.1f ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n\nA matriz 2: \n");

    for(i = 0; i < p; i++){
        for(j = 0; j < l; j++){
            printf("%.1f ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n\nA matriz 2: \n");

    for(i = 0; i < l; i++){
        for(j = 0; j < p; j++){
            printf("%.1f ", produto[i][j]);
        }
        printf("\n");
    }


}
