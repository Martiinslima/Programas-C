#include <stdio.h>
#include <stdlib.h>

int main(){

	char V;	
	float salario,vendas;
 	
	printf("Digite o nome do vendedor:\n");
	scanf("%char",&V);
	printf("Digite o salario fixo:\n");
	scanf("%f",&salario);
	printf("Digite o valor do total de vendas (EM DINHEIRO): \n");
	scanf("%f",&vendas);
	
	salario=salario+vendas/100*15;
	
	printf("TOTAL = R$ %.2f",salario);
	system("PAUSE");
	
	return 0;
}

