#include<stdio.h>
#include<math.h>
int main () {
	
	
	float longueur,largeur,rectangle;
	printf ("Circonférence d'un rectangle");
	printf ("entre les valeurs de longueur & largeur ");
	scanf ("%f%f",&longueur,&largeur);
	rectangle = 2*(longueur + largeur);
	printf("Circonférence d'un rectangle est %.2f",rectangle);
	
	return 0;
}

