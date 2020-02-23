#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	printf("dame un numero:");
	scanf("%d",&a);
	if (a>100){
		printf("tu valor es mayor a 100");
	}
	else if(a<100){
		printf("tu valor es menor a 100");
	}
	else if(a==100){
		printf("tu valor es igual a 100");
	}

	
}
