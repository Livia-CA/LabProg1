#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100], n, i, j, l1, l2, l3, l4, l5, l6;

    l1 = 0;
    l2 = 0;
    l3 = 0;
    l4 = 0;
    l5 = 0;
    l6 = 0;

    printf("entre com a quantidade de lançamentos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){

        do {

            printf("digite o resultado do laçamento %d: ", i);
            scanf("%d", &vetor[i]);

            if(vetor[i] != 1 && vetor[i] != 2 && vetor[i] != 3 && vetor[i] != 4 && vetor[i] != 5 && vetor[i] != 6){
                printf("entrada inválida, tente novamente!\n");
            }

        }while(vetor[i] != 1 && vetor[i] != 2 && vetor[i] != 3 && vetor[i] != 4 && vetor[i] != 5 && vetor[i] != 6);
    }

     for (j = 0; j < n ; j++){

       switch (vetor[j]){

            case 1:
                l1++;
                break;
            case 2:
                l2++;
                break;
            case 3:
                l3++;
                break;
            case 4:
                l4++;
                break;
            case 5:
                l5++;
                break;
            case 6:
                l6++;
                break;

       }

    }

    printf("numero de recorrencias da face 1: %d\nnumero de recorrencias da face 2: %d\nnumero de recorrencias da face 3: %d\nnumero de recorrencias da face 4: %d\nnumero de recorrencias da face 5: %d\nnumero de recorrencias da face 6: %d\n", l1,l2,l3,l4,l5,l6);

    return 0;
}
