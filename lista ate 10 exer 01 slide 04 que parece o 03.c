/*1. Fa�a um programa que receba dois n�meros e
mostre o menor.*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL,"portuguese");
	int a,b;
	printf("digite um numero ");
	scanf("%d",&a);
	printf("digite outro ");
	scanf("%d",&b);
	if (a>b){printf("%d � menor que %d",b,a);}
	else {printf("%d � menor que %d",a,b);
	}
}
