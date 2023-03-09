#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][2], i, j, maior;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            matriz[i][j] = rand() % 10;
            if (i == 0 && j == 0){
                maior = matriz[i][j];
            }
            else if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }

        }
    }

    printf("\nA matriz: \n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nO maior é: %d\n", maior);

    printf("\nO produto é: \n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]*maior);
        }
        printf("\n");
    }




    return 0;
}
