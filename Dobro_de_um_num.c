#include <stdio.h>
#include <stdlib.h>

main(){
	int A,B,C;
	printf("coloque valor de A : \n");
	scanf("%d",&A);
	printf("Coloque o valor de B: \n");
	scanf("%d", &B);
	printf("Coloque o valor de C: \n");
	scanf("%d",&C);
	int res1, res2 ,res3;
	res1 = A*A;
	res2 = B*B;
	res3 = C*C;
	printf("A %d\n B %d \n C :%d \n", res1,res2,res3);
	system("PAUSE");
}
