#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char strings[4][100], aux[100];
    int i, j;

    for (i = 0; i < 4; i++){
        printf("Entre com a palavra %d: ", i);
        scanf("%s%*c", strings[i]);
    }

    for (i = 0; i < 4; i++){
        for (j = i+1; j < 4; j++){
            if (strcmp(strings[i], strings[j]) > 0){
                strcpy(aux, strings[j]);
                strcpy(strings[j], strings[i]);
                strcpy(strings[i], aux);
            }
        }
    }

    for (i = 0; i < 4; i++){
        printf("%s \n", strings[i]);
    }

    return 0;
}


