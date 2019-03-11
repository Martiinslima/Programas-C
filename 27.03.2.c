#include <stdio.h>
#include <stdlib.h>

main(){
	int cont,num;
	cont = 1;
	num = 2;
	while (cont<=5){
		num=num+3;
		cont=cont+1;
	}
	printf("Numero: %d\n",num);
	system("PAUSE");
}
