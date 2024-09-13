#include <stdio.h>
#include <locale.h>
#include <math.h>


int main (){
	setlocale (LC_ALL,"portuguese");
	float a,b,c,delta,x1,x2;
	printf("insira os valores da equação de segundo grau:\n");
	printf("insira o valor de a ");
	scanf("%f",&a);
	printf("insira o valor de b ");
	scanf("%f",&b);
	printf("agora insira o valor de c ");
	scanf("%f",&c);
	delta = ((b*b)+((-4)*(a*c)));
	if (delta<0){printf("não existe raiz real ");}
	else if (delta==0){printf("existe uma raiz\n");
	printf(" valor de x' é de %1.f", ((-b)/(2*a)));
	}
	else if (delta>0){printf("o valor de x' é %1.f\n", ((-b)+sqrt(delta))/(2*a));
	printf("o valor de x'' é %.f", ((-b)-sqrt(delta))/(2*a));
	}
	}

	

