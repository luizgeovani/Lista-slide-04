/*1) Fa�a um programa que receba um n�mero e
verifique se � par ou �mpar.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL,"portuguese");
	int x;
	printf("digite um numero ");
	scanf("%d",&x);
	if (x%2>0){
	printf("� impar"); }
	else{printf("� par");
	}
}
