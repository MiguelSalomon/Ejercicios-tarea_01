#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	float b;
	printf("programa que te dara el descuento dependiendo tu edad para enrar al cine");
	printf("\nentrada normal: 75 pesos");
	printf("\nninos menores de 10 anos descuento del 60 porcirnto");
	printf("\nadultos mayores de 60 anos descuento del 55 porciento");
	printf("\ndame tu edad: ");
	scanf("%d",&a);
	if(a<11){
	b=75*.40;
	printf("el precio de tu voleto es: %.2f pesos",b);	
	}
	else if(a>59){
		b=75*.45;
	printf("el precio de tu voleto es: %.2f pesos",b);
	}
	else if(a>10||a<60){
		printf("el precio del voleto es: 75 pesos");
	}
}
