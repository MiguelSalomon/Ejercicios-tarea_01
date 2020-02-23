#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	printf("programa que te dira si el numero es mayor, menor o igual");
	printf("\ndame un primer numero: ");
	scanf("%d",&a);
	printf("\ndame un segundo numero: ");
	scanf("%d",&b);
	if(a>b){
		printf("\ntu primer numero es mayor que el segundo");
	}
	else if(a<b){
		printf("\ntu primer numero es menor que el segundo");
	}
	else if(a==b){
		printf("\nlos dos numeros son iguales");
	}
}
