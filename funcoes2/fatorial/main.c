#include <stdio.h>
#include <stdlib.h>

#define TMNH 10

/*Faça uma sub-rotina que receba um vetor A de dez elementos inteiros como parâmetro.
Ao final dessa função, deverá ter sido gerado um vetor B contendo o fatorial de cada
elemento de A. O vetor B deverá ser mostrado no programa principal.*/

void fatorial(int A[TMNH], int B[TMNH]);

int main()
{
    int A[TMNH], B[TMNH], i;

    for (i = 0; i < TMNH; i++){
        printf("Entre com um numero inteiro: ");
        scanf("%d", &A[i]);
    }

    fatorial(A,B);

    printf("\nOs fatoriais são:\n");

    for (i = 0; i < TMNH; i++){
        printf("%d\n", B[i]);
    }

    return 0;
}

void fatorial(int A[TMNH], int B[TMNH])
{
    int i, j;

    for (i = 0; i < TMNH; i++){
        B[i] = 1;
        for (j = 1; j <= A[i]; j++){
            B[i] = B[i]*j;
        }
    }
}
