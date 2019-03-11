#include <stdio.h>
#include <stdlib.h>

main (){
	int cont,acum;
	acum=0;
	cont=0;
	while (cont<=20){
		acum = acum+cont;
		cont=cont+1;
	}
	printf("\n Resultado: %d \n",acum);
	system("PAUSE");
	}

