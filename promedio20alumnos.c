#include <math.h>
#include <stdio.h>

float calculadora(int num1, int num2, char op);

int main(void) {
  int num1;
  int num2;
  char op;
  int continuar=1;
  
  do{
    printf("Ingrese su primer número:");
  scanf("%d", &num1);
    printf("La operación que desee realizar:");
   __fpurge(stdin);
  scanf("%c", &op);
    printf("Ingrese su segundo número:");
  scanf("%d", &num2);
#include <stdio.h>
unsigned int suma=0 ,cant=20;
signed int nota;
int recu=0 ,apro=0;
float promedio;
float prom (unsigned int suma,int cant);

int main(void) {
 int vector[20];
  printf("Ingrese las notas de los 20 alumnos:\n");
  
  for(int u=0; u<=19; u++){
    scanf("%d", &vector[u]);
    if(vector[u]<=10){
       suma +=vector[u];
    if(vector[u]<=6)recu++;
    else apro++;
  } 
  else{
  printf("Ingrese una nota valida\n");
    u = u-1;
  } 
}
promedio=prom(suma,cant);
    printf("\nLa nota promedio fue de: %f",promedio);
    printf("\nLa cantidad de alumnos reprobados son: %d",recu);
    printf("\nLa cantidad de alumnos aprobados son: %d",apro);
  return 0;
}
float prom (unsigned int suma,int cant){
  return suma/cant;
}