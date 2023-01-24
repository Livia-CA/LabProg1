/*Escreva um programa para determinar todas as raízes de uma função quadrática. Dado uma equação ax2 + bx + c = 0, podemos encontrar as raízes através do Teorema de Bháskara:

x = (−b ± √ ∆) /2a

Dada a função f(x) = ax2 + bx + c, existirão três casos a serem considerados para a obtenção do número de raízes. A quantidade de raízes de uma função quadrática depende do valor obtido para o radicanto ∆ = b2 − 4ac, chamado de discriminante.

• ∆ > 0: A função possui duas raízes reais e distintas, isto é, diferentes.
• ∆ = 0: A função possui raízes reais e iguais. Nesse caso, dizemos que a função possui uma única raiz.
• ∆ < 0: A função não possui raízes reais.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    double delta, raiz1, raiz2;

    printf("Dada a funcao f(x) = ax^2 + bx + c, digite os valores de a, b e c respectivamente: ");
    scanf("%d%d%d", &a, &b, &c);

    delta = (double)(b*b) - 4*a*c;

    if ( delta == 0 ) {
        raiz1 = (-b + sqrt(delta))/2*a;
        printf("A funcao f(x) = %dx^2 + %dx + %d possui duas raizes reais e iguais. A raiz da funcao eh %lf.", a, b, c, raiz1);
    }
    else if ( delta > 0 ) {
        raiz1 = (-b + sqrt(delta))/2*a;
        raiz2 = (-b - sqrt(delta))/2*a;
        printf("A funcao f(x) = %dx^2 + %dx + %d possui duas raizes reais e distintas. As raizes da funcao sao %lf e %lf.", a, b, c, raiz1, raiz2);
    }
    else {
        printf("A funcao f(x) = %dx^2 + %dx + %d nao possui raizes reais.", a, b, c);
    }

    return 0;
}
