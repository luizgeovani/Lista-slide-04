/*10. Um banco conceder� um cr�dito especial aos seus
clientes, de acordo com o saldo m�dio no �ltimo ano.
Fa�a um programa que receba o saldo m�dio de um
cliente e calcule o valor do cr�dito, de acordo com a
tabela a seguir. Mostre o saldo m�dio e o valor do
cr�dito.
28*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
float saldo;

printf("informe o saldo m�dio do ano anterior ");
scanf("%f",&saldo);
if (saldo<=200){
	printf("com a m�dia de saldo no valor de %.2f, podemos oferecer %.2f de cr�dito ",saldo, saldo*0.1);
}
else if ((saldo>200)&&(saldo<=300)){
	printf("com a m�dia de saldo no valor de %.2f, podemos oferecer %.2f de cr�dito", saldo, saldo*0.2);
}
else if((saldo>300)&&(saldo<=400)){
	printf("com a m�dia de saldo no valor de %.2f, podemos oferecer %.2f de cr�dito", saldo, saldo*0.25);
}
else printf("com a m�dia de saldo no valor de %.2f, podemos oferecer %.2f de cr�dito", saldo, saldo*0.30);
	
}
