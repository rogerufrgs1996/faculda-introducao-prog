#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 13
#define M 31
#define TAMGOLEIRO 19
int empate(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void placar(int a, int b, char timeA[10], char timeB[10])
{
    printf("\nPLACAR : %s : %d  vs  %d : %s", timeA, a, b, timeB );
}
void placarFinal(int a, int b, char timeA[10], char timeB[10])
{
    if(a>b)
    {
        printf("\n%s GANHOU!!", timeA);
    }
    else
    {
        printf("\n%s GANHOU!!", timeB);
    }
}
void goleira(char matriz[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j< M; j++)
        {
            matriz[i][j] = ' ';
        }
    }
    for (int i = 0; i < N; i++ )
    {
        for(int j =0; j< M; j++)
        {
            if(i ==0 || j == 0 || j == M-1)
            {
                matriz[i][j] = '+';
            }
        }
    }
}
void momento(char matriz[N][M])
{
    for (int i = 0; i < N; i++ )
    {
        printf("\n");
        for(int j =0; j< M; j++)
        {
            printf("%c", matriz[i][j]);
        }
    }
}
int gol(char matriz[N][M], int chute)
{
    srand(time(NULL));
    int i = rand() % (N);
    srand(chute);
    int j = rand() % (M);
    if(matriz[i][j]==' ')
    {
        printf("GOOOOL!! \n");
        matriz[i][j] = 'O';
        momento(matriz);
        return 1;

    }
    else if(matriz[i][j]=='+')
    {
        printf("NA TRAVE!! \n");
        matriz[i][j] = 'X';
        momento(matriz);
        return 0;
    }
    else
    {
        printf("DEFENDEU!! \n");
        matriz[i][j] = 'X';
        momento(matriz);
        return 0;
    }

}
void goleiroM(char matriz[N][M], int defesa, int inicio)
{
    srand(time(NULL));
    int altura = rand() % 4;
    char cabelo[]= "        ,,        ";
    char olhos[] = "       <@.@>      ";
    char boca[] =  "ss      ~~      ss";
    char braco[] = "ss---<--||-->---ss";
    char corpo[] = "     |______|     ";
    char pernas[]= "      ||  ||      ";
    char pes[] =   "     mmm  mmm     ";
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-1 - altura][inicio+i] = pes[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-2 - altura][inicio+i] = pernas[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-3 -altura][inicio+i] = pernas[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-4 -altura][inicio+i] = corpo[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-5-altura][inicio+i] = corpo[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-6-altura][inicio+i] = braco[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-7-altura][inicio+i] = boca[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-8-altura][inicio+i] = olhos[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-9-altura][inicio+i] = cabelo[i];
    }
}
void goleiroE(char matriz[N][M], int defesa, int inicio)
{
    srand(time(NULL));
    int altura = rand() % 4;
    char cabelo[]= "    ,,            ";
    char olhos[] = "   <@.@>     s s  ";
    char boca[] =  " s   ~~      / s  ";
    char braco[] = "s s- <--||-->     ";
    char corpo[] = "       |______|   ";
    char pernas[]= "         ||  ||   ";
    char pernas1[]="          ||  ||  ";
    char pes[] =   "          mmm  mmm";
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-1 - altura][inicio+i] = pes[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-2 - altura][inicio+i] = pernas1[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-3 -altura][inicio+i] = pernas[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-4 -altura][inicio+i] = corpo[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-5-altura][inicio+i] = corpo[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-6-altura][inicio+i] = braco[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-7-altura][inicio+i] = boca[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-8-altura][inicio+i] = olhos[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-9-altura][inicio+i] = cabelo[i];
    }
}
void goleiroD(char matriz[N][M], int defesa, int inicio)
{
    srand(time(NULL));
    int altura = rand() % 4;
    char cabelo[]= "            ,,    ";
    char olhos[] = "      s s <@.@>   ";
    char boca[] =  "      / s  ~~   s ";
    char braco[] = "    |<--||-->--s s";
    char corpo[] = "   |______|       ";
    char pernas[]= "  ||  ||          ";
    char pernas1[]=" ||  ||           ";
    char pes[] =   "mmm  mmm          ";
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-1 - altura][inicio+i] = pes[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-2 - altura][inicio+i] = pernas1[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-3 -altura][inicio+i] = pernas[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-4 -altura][inicio+i] = corpo[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-5-altura][inicio+i] = corpo[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-6-altura][inicio+i] = braco[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-7-altura][inicio+i] = boca[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-8-altura][inicio+i] = olhos[i];
    }
    for (int i =0; i< 18 ; i++)
    {
        matriz[N-9-altura][inicio+i] = cabelo[i];
    }
}
int main()
{
    int op =1;
    while (op !=0)
    {
        printf("\nCaractere -> O: indica onde a bola entrou");
        printf("\nCaractere -> X: indica onde a bola atingiu o goleiro ou a trave");
        printf("\nJOGAR: 1 ENCERRAR: 0  ->");

        scanf("%d", &op);
        if(op ==1)
        {
            char matriz[N][M];
            char timeA[10];
            char timeB[10];
            printf(" Nome time A->");
            scanf("%s", timeA);
            printf(" Nome time B->");
            scanf("%s", timeB);
            int a =0;
            int b = 0;
            int penalti = 1;
            int e = 0;
            int chute;
            int defesa;
            while(penalti < 6 || e == 0)
            {
                printf("\n-------------------PENALTI %d --------------------", penalti);
                printf("\n%s COBRADOR #%d digite numero para CHUTAR->", timeA, penalti);
                scanf("%d", &chute);
                printf("\n%s DEFENSOR #%d digite numero para DEFENDER->", timeB, penalti);
                scanf("%d", &defesa);
                printf("\n");
                goleira(matriz);
                srand(defesa);
                int inicio = 1 + ((rand()) % (M - TAMGOLEIRO ));
                if(inicio<=4){
                    goleiroE(matriz, defesa, inicio);
                }
                else if(inicio>=8 ){
                    goleiroD(matriz, defesa, inicio);
                }
                else{
                    goleiroM(matriz, defesa, inicio);
                }
                a= a + gol(matriz, chute);
                printf("\n-----------------------------------------------------------------");
                printf("\n%s COBRADOR #%d digite numero para CHUTAR->", timeB, penalti);
                scanf("%d", &chute);
                printf("\n%s DEFENSOR #%d digite numero para DEFENDER->", timeA);
                scanf("%d", &defesa);
                printf("\n");
                goleira(matriz);
                int inicio2 = 1 + ((rand()) % (M - TAMGOLEIRO ));
                inicio = inicio2;
                if(inicio<=4){
                    goleiroE(matriz, defesa, inicio);
                }
                else if(inicio >=9){
                    goleiroD(matriz, defesa, inicio);
                }
                else{
                    goleiroM(matriz, defesa, inicio);
                }
                b = b +gol(matriz, chute);
                placar(a, b, timeA, timeB);
                penalti ++;
                if(penalti >=5)
                {
                    e = empate(a,b);
                }
            }
            placarFinal(a, b, timeA, timeB);
        }
    }
    return 0;
}
