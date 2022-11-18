
#include <stdio.h>
unsigned int suma=0 ,cant=0;
signed int nota;
float promedio;
float prom (unsigned int suma,int cant);
int main(void) {
  printf("Ingrese las notas a promediar:\n");
  
  do{                   
    scanf("%d", &nota);
      while(nota > 10){
        printf("Ingrese un valor válido\n");
        scanf("%d", &nota);
      }
    if(nota!=-1){
      suma +=nota;
      cant++;
    }
  }while(nota != -1);
  
  promedio=prom(suma,cant);
  printf("\nLa nota promedio fue de: %f",promedio);
  printf("\nLa cantidad de notas son: %d",cant);
  return 0;
}

float prom (unsigned int suma,int cant){
  return suma/cant;
}