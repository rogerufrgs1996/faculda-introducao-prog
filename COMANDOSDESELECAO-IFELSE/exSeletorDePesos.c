#include <stdio.h>
/*2. Faça um programa que lê o peso de 3 pessoas e um valor que
indica um peso de referência. O programa deve informar quantas
pessoas possuem um peso superior ou igual ao peso de referência. */
int main()
{
    double peso1;
    double peso2;
    double peso3;
    double pRef;
    int c;
    printf("digite peso pessoa 1 ->");
    scanf("%lf", &peso1);
    printf("\n");
    printf("digite peso pessoa 2 ->");
    scanf("%lf", &peso2);
    printf("\n");
    printf("digite peso pessoa 3 ->");
    scanf("%lf", &peso3);
    printf("\n");
    printf("digite peso referencia ->");
    scanf("%lf", &pRef);
    printf("\n");
    if (peso1 >= pRef)
    {
        c = c +1;
    }
    if (peso2 >= pRef)
    {
        c = c +1;
    }
    if (peso3 >= pRef)
    {
        c = c +1;
    }
    printf("%d",c);
    return 0;
}
