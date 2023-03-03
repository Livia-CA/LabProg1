#include <stdio.h>
#include <stdlib.h>

#define TMNH 10

int main()
{
    int v1[TMNH], v2[TMNH], v3[2*TMNH], i, j, k, l = 0;


    for(j = 0; j < TMNH; j++){
        printf("digite o %dº elemento do vetor 1: ", j+1);
        scanf("%d", &v1[j]);
    }

    printf("\n\n");

    for(i = 0; i < TMNH; i++){
        printf("digite o %dº elemento do vetor 2: ", i+1);
        scanf("%d", &v2[i]);
    }

    printf("\n\n");


    for(k = 0; k < (2*TMNH); k=k+2, l++){
        v3[k] = v1[l];
        v3[k+1] = v2[l];
    }

    for(l = 0; l < (2*TMNH); l++){
        printf("\n%d", v3[l]);
    }


    return 0;
}
