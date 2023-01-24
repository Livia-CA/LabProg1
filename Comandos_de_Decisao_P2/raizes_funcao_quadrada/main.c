#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    double delta, raiz1, raiz2;

    printf("Dada a função f(x) = ax^2 + bx + c, digite os valores de a, b e c respectivamente: ");
    scanf("%d%d%d", &a, &b, &c);

    delta = (double)(b*b) - 4*a*c;

    if ( delta == 0 ) {
        raiz1 = (-b + sqrt(delta))/2*a;
        printf("A função f(x) = %dx^2 + %dx + %d possui duas raizes reais e iguais. A raiz da funcao eh %lf.", a, b, c, raiz1);
    }
    else if ( delta > 0 ) {
        raiz1 = (-b + sqrt(delta))/2*a;
        raiz2 = (-b - sqrt(delta))/2*a;
        printf("A função f(x) = %dx^2 + %dx + %d possui duas raizes reais e distintas. As raizes da funcao sao %lf e %lf.", a, b, c, raiz1, raiz2);
    }
    else {
        printf("A função f(x) = %dx^2 + %dx + %d nao possui raizes reais.", a, b, c);
    }

    return 0;
}
