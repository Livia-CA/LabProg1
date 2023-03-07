#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[100][100], l, c, i, j;

    printf("Entre com o numero de linhas e colunas respectivamente: ");
    scanf("%d%d", &l,&c);

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("Entre com o numero da posicao (%d,%d): ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n\na matriz:\n");

     for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\na matriz transposta dela:\n");

     for(i = 0; i < c; i++){
        for(j = 0; j < l; j++){
           printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}
