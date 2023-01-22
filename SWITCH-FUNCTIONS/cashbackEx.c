#include <stdio.h>
/*1.  O supermercado CompreBem resolveu dar um cash back para seus clientes dependendo do nível de cada cliente. Para isso instalou um caixa eletrônico específico para pagar esses clientes. Primeiro o caixa pedia o valor total das compras. Como esse caixa possui apenas um teclado numérico, a segunda coisa que ele pedia era um número correspondente ao seu nível do cliente segundo o quadro abaixo:
1 - Basic
2 - Vip
3 - Master
(Esse quadro era exibido na tela).
Se o cliente por algum motivo digitasse um número diferente de 1,2ou3 o caixa imprimia a mensagem “Opcao Invalida. Operacao cancelada” e encerrava. Caso contrário o caixa apresentava o valor do cash back ao cliente e perguntava se ele gostaria de sacar ou acumular. Lembrando que o caixa só tinha teclado numérico
1-Sacar
2-Acumular
Caso o a opção fosse 1 o caixa liberava o dinheiro e imprimia a frase “Saque realizado"
caso a opção fosse 2 o caixa apenas imprimia a frase ”Valor acumulado”.
Se fosse digitado um valor diferente de 1 ou 2 o caixa imprimia a mensagem “Opcao Invalida. Operacao cancelada” e encerrava. O valor do cash back para clientes Basic era de 3%, para clientes Vip era 6%, e para clientes Master era 12%.
O do cash back quando apresentado deve estar formatado para aparecer com 2 casas decimais e com o R$ na frente.*/

void caixa(double cashback)
{
    printf("digite a opcao desejada \n");
    printf("1 - sacar\n");
    printf("2 - acumular\n");
    int op;
    scanf("%d", &op);
    switch(op)
    {
    case 1:
        printf("saque realizado \n");
        cashback =0;
        break;
    case 2:
        printf("valor acumulado \n");
        break;
    default:
        printf("operacao invalida \n ");
    }
}

int main()
{
    double valorTotal;
    int escolha;
    double cashback;
    printf("digite valor total das compras -> ");
    scanf("%lf", &valorTotal);
    printf("\n");
    printf("digite a opcao desejada \n");
    printf("1 - basic\n");
    printf("2 - vip\n");
    printf("3 - master\n");
    scanf("%d", &escolha);
    printf("\n");
    switch(escolha)
    {
    case 1:
        cashback = valorTotal*0.03;
        printf("valor do cashback ->R$ %.2lf", cashback);
        printf("\n");
        caixa(cashback);
        break;
    case 2:
        cashback = valorTotal*0.06;
        printf("valor do cashback ->R$ %.2lf", cashback);
        printf("\n");
        caixa(cashback);
        break;
    case 3:
        cashback = valorTotal*0.12;
        printf("valor do cashback ->R$ %.2lf", cashback);
        printf("\n");
        caixa(cashback);
        break;
    default:
        printf("operacao invalida \n ");
    }
    return 0;
}
