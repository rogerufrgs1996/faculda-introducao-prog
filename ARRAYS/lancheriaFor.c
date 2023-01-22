#include <stdio.h>
int buscaCodigo(int cod, int codigo[])
{
    for (int i = 0; i<4 ; i++)
    {
        if(cod == codigo[i] )
        {
            return i;
        }
    }
    return 5;
}
int main()
{
    int n;
    char cardapio[4][10] = {{"Dog"},{"XisSalada"},{"Bauru"},{"RefriLata"}};
    int codigo[] = {100, 104, 110, 120};
    float valor[] = {13, 18, 24,4};
    float total;
    int cod;
    float qtd;
    printf("\nDigite numero de itens a serem comprados-> ");
    scanf("%d",&n);
    int pedido[n];
    float qtdade[n];
    float subtotais[n];
    for (int i = 0; i<n; i++)
    {

        printf("\nDigite codigo do item-> ");
        scanf("%d", &cod);
        while (buscaCodigo(cod, codigo)== 5)
        {
            printf("\nCODIGO INVALIDO! Tente novamente.");
            scanf("%d", &cod);
        }

        printf("\nDigite quantidade desejada - > ");
        scanf("%f", &qtd);
        pedido[i] = buscaCodigo(cod, codigo);
        qtdade[i] = qtd;
        subtotais[i] = qtd*valor[buscaCodigo(cod, codigo)];
        total = total + (valor[buscaCodigo(cod, codigo)]*qtd);
    }
    printf("\n------NOTA FISCAL------ " );
    for (int x =0; x<n; x++ )
    {
        printf("\nPRODUTO: %s /", cardapio[pedido[x]]);
        printf(" QTD: %.0f /",qtdade[x] );
        printf(" SUBTOTAL: R$%.2f ",subtotais[x]);
    }
    printf("\nVALOR TOTAL - >R$%.2f ", total);
    return 0;
}
