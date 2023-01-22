#include <stdio.h>

int buscaNumero(int x, int array[6]){
    for(int i=0; i<6;i++){
        if(array[i]==x){
            return i;
        }
    }
    return 10;
}
int main(){
    int array[6];
    int n;
    int x;
    for(int i=0; i<6; i++){
        printf("\ndigite numero da posicao #%d do array ->", (i+1));
        scanf("%d",&n);
        array[i]= n;
    }
    printf("\ndigite o numero a ser encontrado -> ");
    scanf("%d", &x);
    if(buscaNumero(x, array)!=10){
       printf("O valor %d esta presente no vetor, na posicao %d", x, buscaNumero(x, array));
    }else{
        printf("O valor nao esta presente no vetor");
    }




return 0;
}
