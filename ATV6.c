#include <stdio.h>
#include <stdlib.h>

main(){
	
	float reais,dolar;
	printf("Coloque o valor do dolar: \n");
	scanf("%f",&dolar);
	printf("Coloque o valor do dolar em reais: \n");
	scanf("%f",&reais);
	float cotacao = dolar*reais;
	printf("Valor em Reais e: %.2f \n",cotacao);
	system("PAUSE");
}
