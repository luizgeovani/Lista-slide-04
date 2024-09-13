/*10. Um banco concederá um crédito especial aos seus
clientes, de acordo com o saldo médio no último ano.
Faça um programa que receba o saldo médio de um
cliente e calcule o valor do crédito, de acordo com a
tabela a seguir. Mostre o saldo médio e o valor do
crédito.
28*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
float saldo;

printf("informe o saldo médio do ano anterior ");
scanf("%f",&saldo);
if (saldo<=200){
	printf("com a média de saldo no valor de %.2f, podemos oferecer %.2f de crédito ",saldo, saldo*0.1);
}
else if ((saldo>200)&&(saldo<=300)){
	printf("com a média de saldo no valor de %.2f, podemos oferecer %.2f de crédito", saldo, saldo*0.2);
}
else if((saldo>300)&&(saldo<=400)){
	printf("com a média de saldo no valor de %.2f, podemos oferecer %.2f de crédito", saldo, saldo*0.25);
}
else printf("com a média de saldo no valor de %.2f, podemos oferecer %.2f de crédito", saldo, saldo*0.30);
	
}
