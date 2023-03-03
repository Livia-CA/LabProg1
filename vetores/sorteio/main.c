/*Escreve um programa que sorteia aleatoriamente seis números inteiros x, tal que 1 ≤ x ≤
60, e armazene-os em um vetor. Em seguida, o usuário digita um número e seu programa
em C deve acusar se o número digitado está no vetor ou não. Se estiver, infome a posição.
O programa deve finalizar quando o usuário entrar com zero.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v6[6], i, j, n, cont;

    for (i = 0; i < 6; i++){
        v6[i] = rand() % 60;
        printf("%d ", v6[i]);
    }

    do{
        cont = 0;

        printf("\ndigite um numero: ");
        scanf("%d", &n);

        if (n == 0)
            break;

        for (j = 0; j < 6; j++){
            if(n == v6[j]){
                printf("\nSeu numero está entre os numeros sorteados e está na %dº posição!!", j+1);
                cont++;
                break;
            }
        }

        if (cont == 0)
            printf("\nSeu numero não está entre os numeros sorteados, tente novamente ou digite 0 para sair!");

    }while(n != 0);

    printf("Fim!");

    return 0;
}
