#include <stdio.h>
int soma(int n1, int n2)
    {
        int soma = 0;
        for (int i = n1; i<=n2; i++)
        {
            if (i % 2 != 0)
            {
             soma = soma + i;
            }
        }
        printf("\nSOMA -> %d", soma);
    return 0;
}
int main()
{
    int n1;
    int n2;
    int erro = 1;
    while (erro == 1)
    {
        printf("digite numero inteiro - > ");
        scanf("%d",&n1);
        printf("\ndigite segundo numero inteiro - > ");
        scanf("%d",&n2);
        if (n1< n2)
        {
            erro = 0;
            soma(n1, n2);
        }
        else if(n1 > n2)
        {
            erro = 0;
            int n3 = n1;
            n1 = n2;
            n2 = n3;
            soma(n1, n2);
        }
        else
        {
            erro = 1;
            printf("\n Numeros iguais. Tente novamente ");
        }
    }
return 0;
}



