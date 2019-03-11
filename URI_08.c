#include <stdio.h>
 
int main() {
 
    int NUMERO,H;	
	double SALARIO;
	
	printf("NUMERO:");	
	scanf("%d",&NUMERO);
	printf("HORAS");
	scanf("%d",&H);
	printf("VALOR/H:");
	scanf("%lf",&SALARIO);
	
	SALARIO = H*SALARIO;
	printf("NUMERO = %d \n SALARIO = U$ %.2lf\n",NUMERO,SALARIO);
 
 	system("PAUSE");
    return 0;
}
