/*Implemente um programa para verificar se um aluno foi aprovado ou não na disciplina de
Laboratório de Programação 1. Para ser aprovado o aluno deve obter um número
de faltas inferior a 18 e uma média final maior ou igual a 6. Inicialmente deve ser lido a
quantidade de faltas do aluno. Se a quantidade for maior que 18, então automaticamente
deve ser impresso na tela a mensagem “Reprovado!”. Caso contrário, deve ser lido as notas
das Prova 1 (P1), Prova 2 (P2), Prova Substitutiva (PS) e Trabalho Prático (TP). A média
deve ser calculada pela fórmula abaixo (PS deve opcionalmente substituir a menor nota
entre P1 e P2):

media = P1 ∗ 0.35 + P2 ∗ 0.35 + T P ∗ 0.3 (1)

Caso media < 4, o aluno estará reprovado. Se media ≥ 6, o aluno estará aprovado. Por
fim, para o caso de 4 ≤ media < 6, deverá ser lido uma nova nota correspondente ao
exame final. Se a nota do exame final for maior ou igual a 6, o aluno estará aprovado,
caso contrário reprovado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntdFaltas;
    float notaP1, notaP2, notaSub, notaTrab, media, notaExame;

    printf("digite a quantidade de faltas: ");
    scanf("%i", &qntdFaltas);

    if (qntdFaltas > 18)
        printf("reprovado!");

    else{
        printf("digite a nota na Prova 1, Prova 2, Prova Substitutiva e no Trabalho Prático respectivamente: ");
        scanf("%f%f%f%f", &notaP1, &notaP2, &notaSub, &notaTrab);

        if (notaSub > notaP1 || notaSub > notaP2){
            if (notaP1 > notaP2)
                notaP2 = notaSub;
            else
                notaP1 = notaSub;
        }

        media = notaP1*0.35 + notaP2*0.35 + notaTrab*0.3;

        if (media < 4)
            printf("reprovado!");
        if (media >= 6)
            printf("aprovado! Parabéns!!");
        else {
            printf("digite a nota do exame: ");
            scanf("%f", &notaExame);

            if (notaExame >= 6)
                printf("aprovado! Parabéns!!");
            else
                printf("reprovado!");
        }
    }
}
