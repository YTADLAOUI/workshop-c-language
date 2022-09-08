#include <stdio.h>
#include <stdlib.h>

int main() {
	float C,F;
	
	printf("programme qui demande la temperature en Fahrenheit et la transforme en degre Celsius  \n");
	printf("Entre la temperature en Fahrenheit : ");
	scanf("%f",&F);
	C = (F-32)/1.8;
	if (C<0)
	    printf ("la temperature de Celsius : %0.2f  tres froid",C);
	else if(C<25)
	    printf ("la temperature de Celsius : %0.2f froid",C);
	else if(C>=25 && C<38) 
		printf ("la temperature de Celsius : %0.2f chaud",C);
	else if(C>=38)
	    printf("la temperature de Celsius : %0.2f tres chaud",C);

	
	
	
	return 0;
}
