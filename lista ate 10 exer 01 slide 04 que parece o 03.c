/*1. Faça um programa que receba dois números e
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
	if (a>b){printf("%d é menor que %d",b,a);}
	else {printf("%d é menor que %d",a,b);
	}
}
