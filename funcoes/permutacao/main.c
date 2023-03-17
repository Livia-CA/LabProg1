#include <stdio.h>
#include <stdlib.h>

int conta_digitos(int num);

int main()
{
    int a, b, digitos_a, digitos_b;

    printf("Entre com o valor de a: ");
    scanf("%d", &a);

    printf("Entre com o valor de b: ");
    scanf("%d", &b);

    digitos_a = conta_digitos(a);
    digitos_b = conta_digitos(b);

    digitos_a == digitos_b ? printf("a eh permutacao de b") : printf("a nao eh permutacao de b");

    return 0;
}

int conta_digitos(int num) {

    int cont1, cont2, cont3, cont4, cont5, cont6, cont7, cont8, cont9, fim, repeticoes;

    cont1 = 1;
    cont2 = 1;
    cont3 = 1;
    cont4 = 1;
    cont5 = 1;
    cont6 = 1;
    cont7 = 1;
    cont8 = 1;
    cont9 = 1;

    do{

        fim = num % 10;

        switch (fim){
            case 1:
                cont1++;
                break;
            case 2:
                cont2++;
                break;
            case 3:
                cont3++;
                break;
            case 4:
                cont4++;
                break;
            case 5:
                cont5++;
                break;
            case 6:
                cont6++;
                break;
            case 7:
                cont7++;
                break;
            case 8:
                cont8++;
                break;
            case 9:
                cont9++;
                break;
        }

        num = num/10;

    }while(num != 0);

    repeticoes =(((((((cont1*10 + cont2)*10 + cont3)*10 + cont4)*10 + cont5)*10 + cont6)*10 + cont7)*10 + cont8)*10 + cont9;

    return repeticoes;

}
