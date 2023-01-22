#include <stdio.h>
/*1. Escreva um programa que leia dois valores inteiros referentes a
quantidade de gols marcadas pelo Brasil e pela Croácia em uma
simulação das quartas-de-final da Copa do Mundo 2022. Se houve
um vencedor, informe o placar final no seguinte formato:
BRASIL _ x _ CROACIA
Caso o resultado tenha sido um empate, peça para o usuário
informar o resultado da disputa de penaltis (numero de gols de cada
time), e informe o placar final da disputa :
BRASIL _ x _ CROACIA
Pen: ( _ x _ )
Ao fim, indique o nome do time classificado para a semi-final.
______ CLASSIFICADO PARA AS SEMI-FINAIS!!!*/


int main()
{
    int brasil;
    int croacia;
    int pBrasil;
    int pCroacia;
    printf("digite numero de gols do Brasil ->");
    scanf("%d", &brasil);
    printf("\n");
    printf("digite numero de gols da Croacia ->");
    scanf("%d", &croacia);
    printf("\n");
    if (croacia == brasil)
    {
        printf("digite numero de gols do Brasil nos penaltis ->");
        scanf("%d", &pBrasil);
        printf("\n");
        printf("digite numero de gols da Croacia nos penaltis ->");
        scanf("%d", &pCroacia);
        printf("BRASIL %d", brasil);
        printf(" x %d CROACIA\n", croacia);
        printf("Pen: (%d", pBrasil);
        printf(" x %d)", pCroacia);
        printf("\n");
        if(pCroacia>pBrasil)
        {
            printf("CROACIA CLASSIFICADA PARA AS SEMI-FINAIS!!!");
        }
        else
        {
            printf("BRASIL CLASSIFICADO PARA AS SEMI-FINAIS!!!");
        }

    }
    else
    {
        printf("BRASIL %d", brasil);
        printf(" x %d CROACIA\n", croacia);
        if(croacia>brasil)
        {
            printf("CROACIA CLASSIFICADA PARA AS SEMI-FINAIS!!!");
        }
        else
        {
            printf("BRASIL CLASSIFICADO PARA AS SEMI-FINAIS!!!");
        }
    }
    return 0;
}
