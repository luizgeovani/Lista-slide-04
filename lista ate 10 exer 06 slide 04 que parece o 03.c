#include <stdio.h>
#include <locale.h>


int main (){
	setlocale (LC_ALL,"portuguese");
float sal,x,x1,aux1,aux2;
aux1=150;
aux2=100;

printf("informe o salario ");
scanf("%f",&sal);
if (sal<=500){
	printf("você recebera 5%% de bonificação %.2f, e auxilio escola %.2f ", sal*1.05, aux1);
	}
	else if (sal>500 && sal<=600){
	printf("você recebera 12%% de aumento %.2f, e %2.f de auxilio excola ", (sal*1.12), aux1);
	}
	else if ((sal>600) && (sal<=1200)){
		printf("voce recebera 12%% de aumento %.2f, e %2.f, de auxilio escola", (sal*1.12), aux2);
	}
	else if (sal>1200){
		printf("não terá aumento salarial, apenas auxilio escola de %.2f",aux2);
	}


}
