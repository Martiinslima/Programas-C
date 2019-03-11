#include <stdio.h>
#include <stdlib.h>

main(){
	float av1,av2,av3,av4;
	printf("Coloque a nota da AV1: \n");
	scanf("%f",&av1);
	printf("coloque a nota da AV2: \n");
	scanf("%f",&av2);
	printf("coloque a nota da av3: \n");
	scanf("%f",&av3);
	printf("coloque a nota da AV4: \n");
	scanf("%f",&av4);
	float resultado = (av1+av2+av3+av4)/4;
	
	if (resultado >= 6){
	printf("APROVADO! \n");
	}
	else {
		printf("REPROVADO! \n");
	}
	system("PAUSE");
}
