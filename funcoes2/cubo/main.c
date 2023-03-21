#include <stdio.h>
#include <stdlib.h>

void calcula_cubo(int *x);

int main()
{
    int num;

    printf("Entre com um numero: ");
    scanf("%d",&num);

    calcula_cubo(&num);

    printf("O cubo do valor digitado eh %d", num);

    return 0;
}

void calcula_cubo(int *x){
    *x = (*x)*(*x)*(*x);
}
