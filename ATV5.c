#include <stdio.h>
#include <stdlib.h>

main(){
	
	float salario;
	printf("coloque o salario: \n");
	scanf("%f",&salario);
	float reajuste = salario*1.20;
	printf("O salario atual e: %.2f \n",reajuste);
	system("PAUSE");
}
