/*8. Dados três valores X, Y e Z, verifique se eles podem ser os
comprimentos dos lados de um triângulo e, se forem, verifique se
é um triângulo equilátero, isósceles ou escaleno. Se eles não
formarem um triângulo, escreva uma mensagem. Considere que:
• o comprimento de cada lado de um triângulo é menor que a
soma dos outros dois lados;
• chama-se equilátero o triângulo que tem três lados iguais;
• denomina-se isósceles o triângulo que tem o comprimento de
dois lados iguais;
• recebe o nome de escaleno o triângulo que tem os três lados
diferentes.
26*/
#include <stdio.h>
#include <locale.h>
int main (){
setlocale (LC_ALL,"portuguese");
int a,b,c;
printf("digite o valor de um lado ");
scanf("%d",&a);
printf("digite outro ");
scanf("%d",&b);
printf("agora o ultimo lado ");
scanf("%d",&c);
if ((a+b>c) && (b+c>a) && (a+c>b)){
	printf("triangulo válido \n");
	if ((a==b)&&(c==a)){
		printf("é um triangulo equilatero");
		}
	else if((a==b) || (b==c) || (c==a)){
			printf("é um triangulo isoceles");
		}
		else {printf("é um triangulo escaleno");
}
}
else printf("não é um triangulo ");

}
