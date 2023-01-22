#include <stdio.h>
int main(){
    int arr1[5];
    int arr2[5];
    int arr3[10];
    int n;
    int x = 4;
    int y = 0;
    for(int i=0; i<5; i++){
        printf("\ndigite numero da posicao #%d do array 1 ->", i);
        scanf("%d",&n);
        arr1[i]= n;
    }
    for(int i=0; i<5; i++){
        printf("\ndigite numero da posicao #%d do array 2 ->", i);
        scanf("%d",&n);
        arr2[i]= n;
    }
    while(y!=5){
        arr3[y] = arr2[y];
        arr3[x + 5] = arr1[y];
        y++;
        x--;
    }
    printf("Valores de arr3: ");
    for (int i =0; i<10 ; i++){
        printf("%d ", arr3[i]);
    }
 return 0;
}
