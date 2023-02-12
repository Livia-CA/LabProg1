#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, mdc, resto, inicio, controle;

    inicio = 1;

    while (controle != 0){
        printf("entre com um numero (digite 0 para sair): ");
        scanf("%d", &n);

        controle = n;

        if(controle != 0){
            if(inicio == 1){
                mdc = n;
                inicio = 0;
            }
            else{
                while(n != 0){
                    resto = mdc % n;
                    mdc = n;
                    n = resto;
                }
            }
        }
    }


    printf("O mdc dos numeros digitados é: %d", mdc);
    return 0;
}
