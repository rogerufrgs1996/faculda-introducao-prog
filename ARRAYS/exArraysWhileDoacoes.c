#include <stdio.h>

int main(){
float qntDesejada = 0;
float doacao;
int cont =0;
float valorTotal = 0;
printf("digite almejada para arrecadacao ->");
scanf("%f",&qntDesejada);
printf("");
while(valorTotal<qntDesejada){
    printf("\ndigite valor da doacao ->");
    scanf("%f",&doacao);
    while(doacao <= 0){
       printf("\nVALOR INVALIDO!! Digite valor da doacao novamente ->");
       scanf("%f",&doacao);
    }
    valorTotal+=doacao;
    cont++;
}
printf("");
printf("VALOR TOTAL ARRECADADO -> %.2f", valorTotal);
printf("\nVALOR MEDIO DE DOACAO -> %.2f", (valorTotal/cont));

return 0;
}
