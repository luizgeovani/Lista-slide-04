#include <stdio.h>
#include <locale.h>
int main(){

float h,kg,imc;
printf("informe o seu peso em kg ");
scanf("%f",&kg);
printf("informe sua altura em metros ");
scanf("%f",&h);
imc=(kg/(h*h));
if (imc<18.5){
	printf(" abaixo do peso normal ");
}
else if ((imc>=18.5) && (imc<=24.9)){
	printf("peso normal ");
}
else if((imc>=25)&&(imc<=29.9)){
	printf("excesso de peso ");
}
else if((imc>29.9)&&(imc<=34.9)){
	printf("obesidade classe I ");
}
else if((imc>34.9)&&(imc<=39.9)){
	printf("obesidade classe II ");
}
else printf("obesidade classe III");

}
