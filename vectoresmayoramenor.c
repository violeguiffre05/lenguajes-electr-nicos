#include <stdio.h>

int main(void) {
 int aux = 0;
 int vector[10];
  printf("Ingrese 10 valores númericos\n"); 
  
for(int u=0; u<=9; u++){
  scanf("%d", &vector[u]);
  }
    for(int i=0; i<=9; i++){
      for(int j=0; j<9; j++){
        if(vector[i] > vector[j]){
          aux = vector[i];
          vector[i] = vector[j];
          vector[j] = aux;
        }
      }
    }
printf("A continuación se muestran los 10 valores ordenados de mayor a menor:\n");
for(int k=0; k<=9; k++){
    printf("%d\n", vector[k]);
  }
  return 0;
}