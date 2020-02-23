#include<stdio.h>
#include<stdlib.h>
int main(){
    float y,x;
    printf("el programa calculara el valor de la funcion dependiendo el valor de x\n ");
   printf("si me das un valor menor o igual a 0 te dare la funcion y=x+3\n");
   printf("si me das un valor mayor a 0 te dare la funcion y=((x*x)+2*x)\n");
    printf("dame el valor de x\n");
    scanf("%f",&x);
    if(x<=0){
             y=x+3;
             printf("el resultado de tu funcion y=x+3; es: %.2f",y);
             }
             else if(x>0){
                  y=((x*x)+2*x);
                  printf("el resultado de tu funcion y=((x*x)+2*x) es: %.2f",y);
                  }
    
    
    
    }
