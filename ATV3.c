#include <stdio.h>
#include <stdlib.h>

main(){
	
	float base,altura;
	printf("informe a base do triangulo: \n");
	scanf("%f", &base);
	printf("informe a altura do triangulo: \n");
	scanf("%f", &altura);
	float area = (base*altura)/2;
	printf("a area do triangulo e: %.2f \n", area);
	system("PAUSE");
	
}
