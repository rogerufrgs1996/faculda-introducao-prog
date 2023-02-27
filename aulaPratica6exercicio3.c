#include <stdio.h>
#define V 5
#define L 4
#define C 5

int main()
{
    int matriz[L][C];
    int v1[V], v2[V];
    int aux;

    //RECEBENDO VALORES VETOR 1
    for(int i =0; i< V; i++)
    {
        printf("\nVETOR 1: Digite o #%d numero -> ", (i+1));
        scanf("%d", &aux);
        v1[i] = aux;
    }
    //RECEBENDO VALORES VETOR 2
    for(int i =0; i < V; i++)
    {
        printf("\nVETOR 2: Digite o #%d numero -> ", (i+1));
        scanf("%d", &aux);
        v2[i] = aux;
    }
    //CRIANDO MATRIZ
    for(int i =0; i< L; i++)
    {
        for(int j =0; j <C; j++)
        {
            switch(i)
            {
            case 0:
                matriz[i][j] = v1[j];
                break;
            case 1:
                matriz[i][j] = v2[j]*v2[j];
                break;
            case 2:
                matriz[i][j] = v1[j] + v2[j];
                break;
            default:
                if(v1[j] == v2[j])
                {
                    matriz[i][j] = 0;
                }
                else if(v1[j] > v2[j])
                {
                    matriz[i][j] = 1;
                }
                else
                {
                    matriz[i][j] = 2;
                }
            }
        }
    }
    //PRINTANDO VETORES
    printf("\nVETOR 1 : ");
    for(int i =0; i < V; i++)
    {
        printf("%5d", v1[i]);
    }
    printf("\nVETOR 2 : ");
    for(int i =0; i < V; i++)
    {
        printf("%5d", v2[i]);
    }
    //PRINTANDO MATRIZ
    printf("\nMATRIZ :\n ");
    for(int i =0; i< L; i++)
    {
        printf("\n");
        for(int j =0; j <C; j++)
        {
            printf("%5d", matriz[i][j]);
        }
    }
    return 0;
}



