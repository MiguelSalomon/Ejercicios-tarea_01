#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	printf("programa que te acomodara trs numeros de menor a mayor\n");
	printf("dame un primer numero:\n");
	scanf("%d",&a);
	printf("dame un segundo numero:\n");
	scanf("%d",&b);
	printf("dame un tercer numero:\n");
	scanf("%d",&c);
	if(a<b && a<c){
		if(b<c){
			printf("\n%d",a);
			printf("\n%d",b);
			printf("\n%d",c);
		}
		else{
		
		printf("\n%d",a);
		printf("\n%d",c);
		printf("\n%d",b);
	}
	}
	if(b<a && b<c){
		if(a<c){
		printf("\n%d",b);
		printf("\n%d",a);
		printf("\n%d",c);	
		}
		else{
		
		printf("\n%d",b);
		printf("\n%d",c);
		printf("\n%d",a);
	}
	}
	if(c<a && c<b){
		if(a<b){
			printf("\n%d",c);
			printf("\n%d",a);
			printf("\n%d",b);
		}
		else{
		
		printf("\n%d",c);
		printf("\n%d",b);
		printf("\n%d",a);
	}
	}
	
}
