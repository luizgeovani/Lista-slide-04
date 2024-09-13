/*2. Faça um programa que receba três números e
mostre-os em ordem crescente. Suponha que o usuário
digitará três números diferentes.*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"portuguese");
	int a,b,c;
	printf("digite um numer ");
	scanf("%d",&a);
	printf("digite outro ");
	scanf("%d",&b);
	printf("o ultimo ");
	scanf("%d",&c);
	//abc
	if ((a>b)&&(c<b)){
		printf("%d, %d, %d",c,b,a); //321 ok a>b e c<b
	} else if((a>c)&&(b<c)){
		printf("%d, %d, %d",b,c,a); //231 ok
	} else if((b>a)&&(c<a)){
		printf("%d, %d, %d", c,a,b); //312 ok
	} else if((b>c)&&(a<c)){
		printf("%d, %d, %d",a,c,b); //132 ok
	} else if((c>a)&&(a<b)){
		printf("%d, %d, %d",a,b,c); //123
	} else if((c>a)&&(b<a)){  //213bac 
		printf("%d, %d, %d",b,a,c);
	}
	
	}
