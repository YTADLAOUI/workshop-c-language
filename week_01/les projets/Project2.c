#include <stdio.h>
#include <stdlib.h>

int main() {
	float C,F;
	
	printf("programme qui demande la temperature en Celsius et la transforme en degre Fahrenheit \n");
	printf("Entre la temperature en Celsius : ");
	scanf("%f",&C);
	F = (C*1.8)+32;
	printf ("la temperature de Fahrenheit : %0.2f ",F);
	
	
	
	
	
	return 0;
}
