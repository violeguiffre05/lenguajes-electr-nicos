#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int totalCar,A,E,I,O,U;
totalCar=0;
    printf("Ingrese hasta 20 carácteres:\n");
    gets(str);
    for(int i=0; str[i] != '\0'; i++){
        totalCar++;
            if(str[i] == 'a'){A++;}
            if(str[i] == 'e'){E++;}
            if(str[i] == 'i'){I++;}
            if(str[i] == 'o'){O++;}
            if(str[i] == 'u'){U++;}
    }
  if(totalCar>20){printf("No ingrese más de 20 carácteres");}
  else{
    printf("La cantidad de carácteres en el string son: %d",totalCar);
    printf("\nLa cantidad de 'a' son= %d",A);
    printf("\nLa cantidad de 'e' son= %d",E);
    printf("\nLa cantidad de 'i' son= %d",I);
    printf("\nLa cantidad de 'o' son= %d",O);
    printf("\nLa cantidad de 'u' son= %d",U);
    return 0;
  }
}