#include <stdio.h>
#include <math.h>
int main(){
 int n;
 float n1;
 float media;
 float variancia;
 float desvio;
 printf("digite quantidade de numeros->");
 scanf("%d", &n);
 for (int i =0; i<n;i++){
    printf("digite numero #%d ->",(i+1));
    scanf("%f", &n1);
    media = media + n1;
    variancia = variancia + (pow(n1,2));
 }
 media = media /n;
 variancia = (variancia/n) - (media*media);
 desvio = sqrt(variancia);
 printf("\nmedia - > %.2f", media);
 printf("\ndesvio - > %.2f", desvio);
 return 0;
}
