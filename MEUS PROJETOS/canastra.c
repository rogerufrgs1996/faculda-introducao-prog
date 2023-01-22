#include <stdio.h>
int checkVencedor(int pontos[], int max, int nJogadores)
{
    int vencedor = 10;
    for (int i =0; i<nJogadores; i++)
    {
        if(pontos[i]>=max)
        {
            max = pontos[i];
            vencedor = i;
            }
    }

    return vencedor;
}
int main()
{
    int nJogadores;
    int max;
    printf("digite pontuacao maxima-> ");
    scanf("%d",&max);
    printf("digite numero de jogadores-> ");
    scanf("%d",&nJogadores);
    char nomeJogadores[nJogadores][10];
    int pontos[nJogadores];
    pontos[0]=0;
    char nome;
    int ponto =0;
    for (int i=0; i<nJogadores; i++)
    {
        scanf("%c",&nome);
        printf("digite nome do jogador #%d-> ",i+1);
        scanf("%s",&nomeJogadores[i]);
        printf("\n");
    }

    int escolha = 9;
    while (escolha!=0)
    {
        printf("\n-----MENU-------- ");
        printf("\n1 - consultar pontos ");
        printf("\n2 - adicionar canastra limpa/suja/morto/pontos ");
        printf("\n0 - exit");
        printf("\nDIGITE NUMERO OP-> ");
        scanf("%d",&escolha);
        printf("\n");
        switch(escolha)
        {
        case 1:
            printf("CONSULTA DE PONTOS\n");
            int e =1;
            for (int i=0; i<nJogadores; i++)
            {
                printf("jogador #%s  PONTOS-> %d",&nomeJogadores[i], pontos[i]);
                printf("\n");
            }
            while(e!=0)
            {
                printf("\ndigite 0 p sair");
                scanf("%d",&e);
            }

            printf("\n");;
            break;
        case 2:
            printf("\n");
            printf("ADICAO DE PONTOS\n");
            for (int i=0; i<nJogadores; i++)
            {
                printf("digite pontos do jogador #%s-> ",&nomeJogadores[i]);
                scanf("%d",&ponto);
                pontos[i]= pontos[i] + ponto;
                printf("\n");
            }
            printf("##############################");
            break;
        default:
            printf("jogo acabou \n");
        }

        if (checkVencedor(pontos, max, nJogadores)!=10)
        {
            printf("\nVENCEDOR -> %s PONTUACAO-> %d", nomeJogadores[checkVencedor(pontos, max, nJogadores)], pontos[checkVencedor(pontos, max, nJogadores)]);
            escolha =0;
        }
    }
    return 0;

}
