#include <stdio.h>
#include <stdlib.h>

int main(){

	int A,B,C,D, DIFERENCA;
	
	printf("Insira um numero: \n");
	scanf("%d",&A);
	printf("Insira um numero: \n");
	scanf("%d",&B);
	printf("Insira um numero: \n");
	scanf("%d",&C);
	printf("Insira um numero: \n");
	scanf("%d",&D);
	
	DIFERENCA=(A*B)-(C*D);
	
	printf("DIFERENCA = %d", DIFERENCA);
	
	system("PAUSE");
		
	return 0;
	
}
