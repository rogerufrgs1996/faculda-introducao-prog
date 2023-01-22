#include <stdio.h>
int quantidade()
{
    int qtd;
    printf("digite quantidade que deseja desse item ->");
    scanf("%d", &qtd);
    return qtd;
}
int main()
{
    int n;
    int qtd;
    int cod;
    float total;
    printf("digite numero de itens a serem comprados-> ");
    scanf("%d",&n);
    for (int i = 0; i<n; i++)
    {
            printf("digite codigo item ");
            scanf("%d", &cod);
            switch(cod)
            {
            case 100:
                total = total + (13*quantidade());
                break;
            case 104:
                total = total + (18*quantidade());
                break;
            case 110:
                total = total + (24*quantidade());
                break;
            case 120:
                total = total + (4*quantidade());
                break;
            default:
                i--;
                printf("codigo nao consta");
            }
        }
    printf("\n valor total -> %.2f", total);
    return 0;
}

