#include<stdio.h>
#include<math.h>
int main () {
	
	
	float longueur,largeur,rectangle;
	printf ("Circonf�rence d'un rectangle");
	printf ("entre les valeurs de longueur & largeur ");
	scanf ("%f%f",&longueur,&largeur);
	rectangle = 2*(longueur + largeur);
	printf("Circonf�rence d'un rectangle est %.2f",rectangle);
	
	return 0;
}

