
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,totalCar;
  totalCar=0;
    printf("Ingrese una palabra\n");
    gets(str);
    for(i=0; str[i] != '\0' && str[i] != ' '; i++){
        if(str[i]!=' '){totalCar++;}
    }
    printf("La cantidad de caracteres en el string son= %d",totalCar);
    return 0;
}