#include <stdio.h>
#include <stdlib.h>



int main() {
	printf("un programme qui demande la distance en Mile et la transforme en km La formule\n");
	float M,km;
	printf("Entre la distance en Mile: ");
	scanf("%f",&M);
	km = M*1.609 ;
	printf("la distance en km est :%f",km);
	return 0;
}
