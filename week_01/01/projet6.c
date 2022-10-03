#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float C,F;
	
	printf("programme qui demande la temperature en Fahrenheit et la transforme en degre Celsius  \n");
	printf("Entre la temperature en Fahrenheit : ");
	scanf("%f",&F);
	C = (F-32)/1.8;
	    printf ("la temperature de Celsius : %0.2f  ",C);
	
	return 0;
}
