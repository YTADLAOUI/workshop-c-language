#include <stdio.h>
#include <stdlib.h>



int main() {
	printf("un programme qui demande la distance en km et la transforme en Mile La formule\n");
	float M,km;
	printf("Entre la distance en km: ");
	scanf("%f",&km);
	M = km/1.609 ;
	printf("la distance en mile est :%f",M);
	return 0;
}


