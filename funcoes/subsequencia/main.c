#include <stdio.h>
#include <stdlib.h>

int subsequencia(int a, int b);
int maior(int a, int b);
int menor(int a, int b);

int main()
{
    int a, b, eh_maior, eh_menor, eh_subsequencia;

    printf("Entre com o valor de a: ");
    scanf("%d", &a);

    printf("Entre com o valor de b: ");
    scanf("%d", &b);

    eh_maior = maior(a, b);
    eh_menor = menor(a, b);

    eh_subsequencia = subsequencia(eh_maior, eh_menor);

    eh_subsequencia == 0 ? printf("%d nao eh subsequencia de %d", eh_menor, eh_maior) : printf("%d eh subsequencia de %d", eh_menor, eh_maior);

    return 0;
}

int maior(int a, int b){

    if (a > b)
        return a;
    else
        return b;

}

int menor(int a, int b){

    if (a < b)
        return a;
    else
        return b;

}

int subsequencia(int a, int b){
    int fim1, fim2, resultado;

    resultado = 0;

    do{
        fim1 = a%10;
        fim2 = b%10;

        if ( fim1 == fim2 ) {

            do{

                fim1 = a%10;
                fim2 = b%10;

                resultado = fim1 == fim2 ? 1 : 0;

                a = a/10;
                b = b/10;

            }while(b != 0);

        }

        a = a/10;
    }while(a != 0);

    return resultado;
}
