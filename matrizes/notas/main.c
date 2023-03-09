#include <stdio.h>
#include <stdlib.h>

#define LINHAS 10
#define COLUNAS 3

int main()
{
    float notas[LINHAS][COLUNAS], menorP1, menorP2, menorP3;
    int i, j, contP1, contP2, contP3, menor;

    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            printf("Entre com a nota da prova %d do aluno %d: ", j+1,i+1);
            scanf("%f", &notas[i][j]);
        }
    }

    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            printf("%.1f ", notas[i][j]);
        }
        printf("\n");
    }


    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            if(j == 0){
                menor = j;
            }
            else if(notas[i][j] < notas[i][menor]){
                menor = j;
            }
        }
        printf("A menor nota do aluno %d foi na prova %d\n", i+1,menor+1);
    }

    menorP1 = notas[0][0];
    menorP2 = notas[0][1];
    menorP3 = notas[0][2];

    contP1 = 0;
    contP2 = 0;
    contP3 = 0;

    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            if(j == 0){
                if(menorP1 > notas[i][j]){
                    menorP1 = notas[i][j];
                    contP1 = 1;
                }
                else if(menorP1 == notas[i][j]){
                    contP1++;
                }
            }
            if(j == 1){
                if(menorP2 > notas[i][j]){
                    menorP2 = notas[i][j];
                    contP2 = 1;
                }
                else if(menorP2 == notas[i][j]){
                    contP2++;
                }
            }
            if(j == 2){
                if(menorP3 > notas[i][j]){
                    menorP3 = notas[i][j];
                    contP3 = 1;
                }
                else if(menorP3 == notas[i][j]){
                    contP3++;
                }
            }
        }
    }

    printf("A menor nota na P1 foi %.1f e %d tiraram essa nota\n", menorP1,contP1);
    printf("A menor nota na P2 foi %.1f e %d tiraram essa nota\n", menorP2,contP2);
    printf("A menor nota na P3 foi %.1f e %d tiraram essa nota\n", menorP3,contP3);

    return 0;
}
