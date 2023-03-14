#include <stdio.h>
#include <stdlib.h>

int sufixo(int a, int b);

int main()
{
    int a, b, eh_sufixo;

    printf("Entre com o valor de a: ");
    scanf("%d", &a);

    printf("Entre com o valor de b: ");
    scanf("%d", &b);

    eh_sufixo = sufixo(a,b);

    eh_sufixo == 0 ? printf("Nao eh sufixo") : printf("Eh sufixo");

    return 0;
}

int sufixo(int a, int b){
    int fim1, fim2, resultado;

    do{
        fim1 = a%10;
        fim2 = b%10;

        resultado = fim1 == fim2 ? 1 : 0;

        a = a/10;
        b = b/10;
    }while(b != 0);

    return resultado;
}

