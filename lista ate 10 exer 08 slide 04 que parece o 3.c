/*8. Dados tr�s valores X, Y e Z, verifique se eles podem ser os
comprimentos dos lados de um tri�ngulo e, se forem, verifique se
� um tri�ngulo equil�tero, is�sceles ou escaleno. Se eles n�o
formarem um tri�ngulo, escreva uma mensagem. Considere que:
� o comprimento de cada lado de um tri�ngulo � menor que a
soma dos outros dois lados;
� chama-se equil�tero o tri�ngulo que tem tr�s lados iguais;
� denomina-se is�sceles o tri�ngulo que tem o comprimento de
dois lados iguais;
� recebe o nome de escaleno o tri�ngulo que tem os tr�s lados
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
	printf("triangulo v�lido \n");
	if ((a==b)&&(c==a)){
		printf("� um triangulo equilatero");
		}
	else if((a==b) || (b==c) || (c==a)){
			printf("� um triangulo isoceles");
		}
		else {printf("� um triangulo escaleno");
}
}
else printf("n�o � um triangulo ");

}
