#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main()
{
    int a, b;

    printf("Entre com o valor de a e b respectivamente: ");
    scanf("%d%d",&a ,&b);

    printf("(1) O valor de a eh %d e de b eh %d\n", a, b);

    swap(&a,&b);

    printf("(2) O valor de a eh %d e de b eh %d", a, b);

    return 0;
}

void swap(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

