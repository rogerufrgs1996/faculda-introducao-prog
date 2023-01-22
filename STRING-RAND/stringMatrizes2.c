#include <stdio.h>
int main(){
    int matriz[10][10];
    for (int i = 0; i < 10; i++ ){
            printf("\n");
        for(int j =0; j< 10; j++){
            if(i%2 ==0 && j%2 ==0){
                matriz[i][j] = 0;
            }
            else if(i%2 ==1 && j%2 ==1){
                matriz[i][j] = -1;
            }
            else{
                matriz[i][j] = i + j;
            }
            printf("%d ", matriz[i][j]);
        }
    }
    printf(matriz);
    return 0;
}
