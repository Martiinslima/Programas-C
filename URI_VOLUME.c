#include <stdio.h>
#include <stdlib.h>

int main (){
	
	/* calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
	A fórmula para calcular o volume é: (4.0/3) * pi * R 3
	*/
	
	float pi=3.14159, R,VOLUME;
	
	printf("Digite o Raio da esfera: \n");
	scanf("%f",&R);
	
	VOLUME = (4.0/3)*pi*R*R*R;
	
	printf("VOLUME = %.3f\n", VOLUME);
	system("PAUSE");
	
	return 0;
	
}
