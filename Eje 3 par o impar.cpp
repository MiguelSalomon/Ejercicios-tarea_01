#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	printf("el programa te dira si es par o impar\n");
	printf("en caso de que sea impar te indicara se es divisible enre 3\n");
	printf("dame un primer numero:");
	scanf("%d",&a);
	b=a%2;
	if(b==0){
	printf("tu numero es par\n");	
	}
	else
	printf("tu numero es impar\n");
	b=a%3;
	if(b==0){
		printf("tu numero es divisible entre 3");
	}
	else 
	printf("tu numero no es divisible entre 3");
}
