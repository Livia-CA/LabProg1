#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int i;

    printf("Entre com um nome: ");
    scanf("%s%*c", nome);

    for (i = 0; i < 4; i++) {
        printf("%c", nome[i]);
    }

    return 0;
}
