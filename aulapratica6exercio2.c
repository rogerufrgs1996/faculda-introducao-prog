#include <stdio.h>
#define LINHA 3
#define COLUNA 4

int main()
{
    int matriz[LINHA][COLUNA];
    int posicaoLinha, posicaoColuna, aux, n, checagem;

    //RECEBENDO VALORES DA MATRIZ
    for(int i =0; i< LINHA; i++)
    {
        for(int j =0; j <COLUNA; j++)
        {
            printf("\nDigite numero da linha %d, coluna %d -> ", (i+1), (j+1));
            scanf("%d", &aux);
            matriz[i][j] = aux;
        }
    }

    //PRINTANDO MATRIZ
    printf("\n MATRIZ: \n");
    for(int i =0; i< LINHA; i++)
    {
        for(int j =0; j <COLUNA; j++)
        {
            printf("%5d", matriz[i][j]);
        }
        printf("\n");
    }

    //RECEBENDO NUMERO A SER ENCONTRADO
    printf("\n Digite numero a ser procurado na matriz -> ");
    scanf("%d", &n);

    //BUSCANDO NUMERO NA MATRIZ
    for(int i =0; i< LINHA; i++)
    {
        for(int j =0; j <COLUNA; j++)
        {
            if(n == matriz[i][j])
            {
                posicaoLinha = i;
                posicaoColuna = j;
                checagem = 1;
            }
        }

    }

    //CHECANDO SE NUMERO FOI ENCONTRADO E PRINTANDO A POSICAO
    if(checagem > 0)
    {
        printf("\nO numero foi encontrado na posicao [%d][%d]", posicaoLinha, posicaoColuna);
    }
    else
    {
        printf("\nNumero nao encontrado");

    }




    return 0;
}
