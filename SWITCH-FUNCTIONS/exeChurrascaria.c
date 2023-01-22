#include <stdio.h>
#define COUVERT 5.90
/*Exercício 2
A churrascaria Vaca Louca pensando em diminuir o trabalho dos seus atendentes instalou um totem de auto-pagamento para seus clientes.
Para usar o cliente digitaria o valor do espeto-corrido do dia.
O totem então apresentava as opções de comandas.
e o cliente digitaria a letra inicial do tipo da sua comanda.
Caso a comanda fosse do tipo Grupo, o cliente deveria ainda digitar o numero de pessoas do grupo.
Os tipos de comanda são
Individual (uma pessoa)
Casal(duas pessoas)
Grupo(de 3 a 10 pessoas)
A comanda era cobrada da seguinte maneira.
Para comanda individual era cobrado valor integral do espeto corrido mais 10% do garçom.
Para a comanda de casal eram cobrados dois espetos corrido mas era dado desconto de 10% em um deles. Também era cobrado os 10% do garçom
Para a comanda de Grupo era cobrado um espeto corrido integral e era dado 15% de desconto para os demais. Também era cobrado os 10%.
Nessa churrascaria também tocava música ao vivo então, o totem acrescentava R$5.9  couvert artístico por pessoa na comanda.
Por fim apresentava o valor total para pagar.
Desenvolva um programa que realize as operações do totem.
Observações
O valor do Couvert é um valor pré definido então deve ser colocados como #define
O usuário necessariamente deve digitar primeiro o valor do rodízio, o programa deve imprimir o menu com os tipos de comandas e só então o usuário pode digitar a letra inicial da sua comanda. O programa deve estar habilitado para receber letras maiúsculas e minúsculas.
O valor total da comanda deve estar formatado para aparecer com 2 casas decimais e com o R$ na frente.
Se o usuário digitar uma letra que não corresponde a nenhuma comandao programa deve  imprimir uma mensagem de erro “Tipo de comanda invalida” e encerrar.
Na comanda de Grupo se o usuario digitar um numero abaixo do intervalo de 3 a 10 pessoas deve ser mostrado uma mensagem de erro e encerrar. Se o numero digitado estiver acima do intervalo, deve ser mostrado uma mensagem de erro diferente e encerrar.
*/
void impressao(double total)
{
    printf("valor total a pagar -> R$ %.2lf", total);
    printf("\n _________________________________\n");

}
void calculo(double valorDoDia, char comanda)
{
    int grupo;
    double total;
    switch(comanda)
    {
    case 'i':
        total = (1.10*valorDoDia) + COUVERT;
        impressao(total);
        break;
    case 'c':
        total = (1.10*1.90*valorDoDia) + (2*COUVERT);
        impressao(total);
        break;
    case 'g':
        printf("\ndigite o numero de pessoas\(entre 3 e 10)/");
        scanf("%d", &grupo);
        printf("\n");
        if (grupo>=3 && grupo<=10)
        {
            total = (1.10 * (((grupo-1)*0.85*valorDoDia)+valorDoDia)) + (grupo*COUVERT);
            impressao(total);
        }
        else if(grupo<3)
        {
            printf("Numero menor que 3\n");
            printf("Comanda de grupo precisa ter numero entre 3 e 10");
            printf("\n");
        }
        else
        {
            printf("Numero maior que 10\n");
            printf("Comanda de grupo precisa ter numero entre 3 e 10");
            printf("\n");
        }
        break;
    case 'e' | 'E':
        printf("\n PROGRAMA FINALIZADO");
        break;
    default:
        printf("\ntipo de comanda invalida\n");
    }
}
int main()
{
    char comanda;
    double valorDoDia;
    printf("VALOR ESPETO CORRIDO -> ");
    scanf("%lf", &valorDoDia);
    printf("\n");
    do
    {

        printf("Digite a inicial do tipo de sua comanda\n");
        printf("I - individual\n");
        printf("C - casal\n");
        printf("G - grupo\n");
        printf("E - sair\n");
        printf("INICIAL -> ");
        scanf("%c", &comanda);
        scanf("%c", &comanda);
        printf("\n");
        comanda = tolower(comanda);
        calculo(valorDoDia, comanda);
    }
    while (comanda!='e');
    return 0;
}
