#include<stdio.h>
#include<stdlib.h>

main (){
    float A[5], B[10];
	float C[15];
	int i,j;

        for (i = 0; i <5; i++){
           printf ("digite o  vetor 1: ");
           scanf ("%f", &A[i]);
           }
        for (i=0; i<10; i++){
           printf ("digite o vetor 2: ");
           scanf ("%f", &B[i]);
           }
        j=0;
        for (i=0;i<5;i++){
                C[i] = A[i];
		 }
		for(j=0;j<15;j++){
		   	C[j+5] = B[j];
		}  
		   
		   printf("\n valores do vetor C \n");
		   for (j=0;j<15;j++){
		   	printf("%f \n",C[j]);
		   }
		   
system("PAUSE");
}
