#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	printf("en este programa sabre si pusiste un numero o letra con if\n");
	printf("dame un numero o una letra\n");
	scanf("%d",&a);
	if(a>0){
		printf("es un numero");
	}
	else {
		printf("en una letra");
	}

	
}
