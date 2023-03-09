#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[100][100], l, c, i, j, row_nulas, col_nulas, cont;

    row_nulas = 0;
    col_nulas = 0;

    printf("Entre com o numero de linhas e colunas da matriz respectivamente: ");
    scanf("%d%d", &l,&c);

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("Entre com o numero da posicao (%d,%d) da matriz: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < l; i++){
        cont = 0;
        for(j = 0; j < c; j++){
            cont += matriz[i][j];
        }
        row_nulas += cont == 0 ? 1 : 0;
    }

    for(i = 0; i < c; i++){
        cont = 0;
        for(j = 0; j < l; j++){
            cont += matriz[j][i];
        }
        col_nulas += cont == 0 ? 1 : 0;
    }

    printf("\nA matriz: \n");

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA quantidade de linhas nulas é: %d", row_nulas);
    printf("\nA quantidade de colunas nulas é: %d", col_nulas);


    return 0;
}
