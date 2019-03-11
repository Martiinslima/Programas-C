#include <stdio.h>
#include <stdlib.h>

main(){
	float kwh,custo=0.20,resultado;
	printf("\n Coloque o seu consumo em kWh. \n ");
	scanf("%f",&kwh);
	
	resultado=custo*kwh;
	
	printf("\n O Valor da sua conta de : \n %2.f \n",resultado,custo);
	
	system ("PAUSE");
	
}
