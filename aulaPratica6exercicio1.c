#include <stdio.h>
#define LINHA 4
#define COLUNA 4

int main(){
  int matriz[LINHA][COLUNA];
  int aux = 0;
  int sum = 0;
  int vetor[COLUNA];

  // recebendo valores da matriz
  for(int i =0; i< LINHA ; i++){
    for(int j =0; j < COLUNA; j++){
        printf("Digite valor da linha %d, coluna %d ->", (i+1), (j+1));
        scanf("%d", &aux);
        matriz[i][j] = aux;
    }
  }

  // somando as colunas
  for(int j = 0; j < COLUNA; j++){
    for(int i = 0; i <LINHA; i++){
        sum+=matriz[i][j];
    }
    vetor[j] = sum;
    sum =0;
    }

  //printando matriz
  printf("\n MATRIZ:");
  for(int i =0; i< LINHA ; i++){
        printf("\n");
    for(int j =0; j < COLUNA; j++){
        printf("%5d", matriz[i][j]);
    }
  }
  //printando vetor das somas
  printf("\n VETOR\n");
  for(int j =0; j < COLUNA; j++){
        printf("%5d", vetor[j]);
  }



return 0;
}
