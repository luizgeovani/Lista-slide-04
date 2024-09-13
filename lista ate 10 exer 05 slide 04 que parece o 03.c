/*switch (variável){
case valor1:
lista de comandos;
break;
case valor2:
lista de comandos;
break;
default:
lista de comandos;
} */
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL,"portuguese");
	int x;
	float sal;
	/*printf("informe seu cargo de 1 a 5\n");
	printf("1-Escriturario\n2-Secretário\n3-Caixa\n4-Gerente\n5-Diretor\n");
	scanf("%d",&x);*/
	while ((x<1) || (x>5)){
		printf("digite novamente, informe seu cargo de 1 a 5\n");
		printf("1-Escriturario\n2-Secretário\n3-Caixa\n4-Gerente\n5-Diretor\n");
		scanf("%d",&x);	
	}
	
	printf("agora informe seu salario ");
	scanf("%f",&sal);
	switch (x){
		case 1:
			printf("escriturario, recebera um aumento de 50%% resultando em %.2f a mais de salário",(sal*0.5));
			break;
		case 2:
			printf("secretario, recebera um aumento de 35%% resultando em %.2f a mais de salário",(sal*0.35));
			break;
		case 3:
			printf("caixa, receberá um aumento de 20%% resultando em %.2f a mais de salário",(sal*0.20));
			break;
		case 4:
			printf("gerente, receberá um aumento de 10%%, resultando em %.2f a mais de salário",(sal*0.10));	
			break;
		case 5:
			printf("diretor, infelizmente nao recebera aumento de salário");
			break;
			}
}
