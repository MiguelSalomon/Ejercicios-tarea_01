#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	printf("programa que te dira si el primero numero es dicisible entre el seguno");
	printf("\ndame un primer numero:");
	scanf("%d",&a);
	printf("\ndame un segundo numero:");
	scanf("%d",&b);
	if(a%b==0){
		printf("si es divisor");
	}
	else
	printf("no es divisor");
}
