/*1) Faça um programa que receba um número e
verifique se é par ou ímpar.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL,"portuguese");
	int x;
	printf("digite um numero ");
	scanf("%d",&x);
	if (x%2>0){
	printf("é impar"); }
	else{printf("é par");
	}
}
