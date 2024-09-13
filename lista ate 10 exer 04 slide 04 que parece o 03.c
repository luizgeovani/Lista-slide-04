/*4. Faça um programa que receba três notas de um
aluno, calcule e mostre a média aritmética e a
mensagem constante na tabela a seguir. Aos alunos que
ficaram para exame, calcule e mostre a nota que
deverão tirar para serem aprovados, considerando que
a média exigida é 6,0.
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL,"portueguese");
	float n1,n2,n3,m,exame;
	printf("digite a nota 1 ");
	scanf("%f",&n1);
	printf("digite a nota 2 ");
	scanf("%f",&n2);
	printf("digite a nota 3 ");
	scanf("%f",&n3);
	m=(n1+n2+n3)/3;
	if (m<3){printf("aluno reprovado");	
	} else if (m>=3 && m<7){printf("esta de exame, precisam tirar %.1f",(12-m));
	}else if (m>=7 && m<=10){printf("aluno aprovado ");}
	
	
	}
