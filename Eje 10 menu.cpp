#include<stdio.h>
#include<stdlib.h>
int main(){
	int o,a,b,d,r;
	printf("MENU\n1.-calcular el area de un tiangulo\n2.-calcular el area de un trapecio\n3.-calcular el area de un recangulo\n");
	scanf("%d",&o);
	switch(o){
		case 1:
		printf("1.-calcular el area de un tiangulo\n");
		printf("dame la base\n");
		scanf("%d",&b);	
		printf("dame la altura\n");
		scanf("%d",&a);
		r=(b*a)/2;
		printf("el area del triangulo es: %d",r);
		break;
		case 2:
			printf("2.-calcular el area de un trapecio\n");
			printf("dame el lado a\n");
			scanf("%d",&a);
			printf("dame el lado b\n");
			scanf("%d",&b);
			printf("dame la altura\n");
			scanf("%d",&d);
			r=((a+b)/2)*d;
			printf("el area del trapecio es: %d",r);
			break;
			case 3:
				printf("3.-calcular el area de un recangulo\n");
				printf("dame la base\n");
				scanf("%d",&b);
				printf("dame la altura\n");
				scanf("%d",&a);
				r=b*a;
				printf("el area del rectangulo es: %d",r);
			    break;
			    default:
			    printf("opcion incorrecta\n");
	}
}
