#include<stdio.h>
#include<stdlib.h>
int main(){
	float m,n,r,y1,y2,x1,x2;
	printf("programa que que calcule la pendiente m de una linea utilizando dos puntos\n");
	printf("dame el valor de y1\n");
	scanf("%f",&y1);
	printf("dame el valor de y2\n");
	scanf("%f",&y2);
	printf("dame el valor de x1\n");
	scanf("%f",&x1);
	printf("dame el valor de x2\n");
	scanf("%f",&x2);
	m=y2-y1;
	n=x2-x1;
	r=m/n;
	printf("el resultado de tu pendiente es: %.2f",r);
	if (m==0){
		printf("\nla pendiente es horizonal\n");
	}
	else if(n==0){
			printf("\nla pendiente es vertical\n");
	}
	
}
