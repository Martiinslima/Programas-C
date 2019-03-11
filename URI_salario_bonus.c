#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char V;	
	float salario,vendas;
 	
	printf("Digite o nome do vendedor:\n");
	scanf("%s",&V);
	printf("Digite o salario fixo:\n");
	scanf("%f",&salario);
	printf("Digite o valor do total de vendas (EM DINHEIRO): \n\n");
	scanf("%f",&vendas);
	
	salario=salario+vendas/100*15;
	
	printf("\n SALARIO A RECEBER = R$ %.2f\n",salario);
	system("PAUSE");

	return 0;
}

