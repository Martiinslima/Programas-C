#include <stdio.h>
#include <stdlib.h>

main (){
	float soma,media,M[5][5];
	int i,j;
	
	for (i=0; i<5;i++){
		for(j=0;j<5;j++){
			printf(" M [%d] [%d] \n digite os numero da matriz.\n ", i,j);
			scanf("%f",&M[i][j]);
			soma=soma+M[i][j];
		}
	}
	media=soma/25;
	
	printf("\n Media de valores inseridos na matriz: %0.1f \n",media);

	system("PAUSE");
}
