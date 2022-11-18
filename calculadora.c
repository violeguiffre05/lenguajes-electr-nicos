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
    float valor = calculadora(num1, num2, op);
    printf("El resultado es: %f \n", valor);
    printf("Realizar otra operación, ingrese 1 \nNo realizar otra operación, ingrese 0 \n", valor);
  scanf("%d", &continuar);
    }while(continuar==1);
  return 0;
}

float calculadora(int num1, int num2, char op) {
  float resultado;
  if (op == '+') {
    resultado = num1 + num2;
  }
  if (op == '-') {
    resultado = num1 - num2;
  }
  if (op == '/' || op == ':') {
    if(num2==0){printf("no es posible dividir por 0\n");}
    else{resultado = num1 / num2;}
  }
  if (op == '*' || op == 'x') {
    resultado = num1 * num2;
  } 
  return resultado;
}