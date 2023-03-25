#include <stdio.h>
#include <stdlib.h>

#define TMNH 10

/*Crie uma sub-rotina que receba como parâmetro dois vetores de dez elementos inteiros
positivos e mostre o vetor união dos dois primeiros.*/

int une_vetores(int vetor1[TMNH], int vetor2[TMNH], int vetor_uniao[2*TMNH]);

int main()
{
    int vet1[TMNH], vet2[TMNH], vet_uniao[2*TMNH], i, cont;

    for (i = 0; i < TMNH; i++){
        printf("Entre com o %d numero do vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
    }

    for (i = 0; i < TMNH; i++){
        printf("Entre com o %d numero do vetor 2: ", i+1);
        scanf("%d", &vet2[i]);
    }

    cont = une_vetores(vet1, vet2, vet_uniao);


    printf("\nO vetor união eh:\n");

    for (i = 0; i < cont; i++){
        printf("%d\n", vet_uniao[i]);
    }

    return 0;
}

int une_vetores(int vetor1[TMNH], int vetor2[TMNH], int vetor_uniao[2*TMNH]){

    int i, j, x, flag;

    x = 0;

    for (i = 0; i < TMNH; i++){
        flag = 0;

        for (j = 0; j <= x; j++){
            if (vetor_uniao[j] == vetor1[i]){
                flag = 1;
            }
        }

        if (flag == 0){
            vetor_uniao[x] = vetor1[i];
            x++;
        }
    }

    for (i = 0; i < TMNH; i++){
        flag = 0;

        for (j = 0; j <= x; j++){
            if (vetor_uniao[j] == vetor2[i]){
                flag = 1;
            }
        }

        if (flag == 0){
            vetor_uniao[x] = vetor2[i];
            x++;
        }
    }

    return x;
}



